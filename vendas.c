#include <stdio.h>
#include "vendas.h"

void realizarVenda(Venda v[], int *numVendas, Cliente c[], Produto p[]) {
    int idCliente, idProduto, quantidade;
    
    // Verifica se atingiu o limite de vendas
    if (*numVendas >= TAMVenda) {
        printf("\nLimite de vendas atingido!\n");
        return;
    }
    
    // Solicita os dados da venda
    printf("\n--- Realizar Venda ---\n");
    printf("ID do Cliente: ");
    scanf("%d", &idCliente);
    
    // Verifica se o cliente existe
    if (!clienteExiste(c, idCliente)) {
        printf("\nCliente não encontrado!\n");
        return;
    }
    
    printf("ID do Produto: ");
    scanf("%d", &idProduto);
    
    // Verifica se o produto existe
    if (!produtoExiste(p, idProduto)) {
        printf("\nProduto não encontrado!\n");
        return;
    }
    
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    
    // Verifica se há estoque suficiente
    if (!verificarEstoque(p, idProduto, quantidade)) {
        printf("\nEstoque insuficiente!\n");
        return;
    }
    
    // Calcula o valor total da venda
    float valorUnitario = obterValorProduto(p, idProduto);
    float valorTotal = valorUnitario * quantidade;
    
    // Registra a venda
    v[*numVendas].idCliente = idCliente;
    v[*numVendas].idProduto = idProduto;
    v[*numVendas].quantProduto = quantidade;
    v[*numVendas].valorTotal = valorTotal;
    
    // Atualiza o número de vendas realizadas
    (*numVendas)++;
    
    // Atualiza o estoque
    atualizarEstoque(p, idProduto, quantidade);
    
    printf("\nVenda realizada com sucesso!");
    printf("\nValor total: R$ %.2f\n", valorTotal);
}

void consultarVendas(Venda v[], int numVendas) {
    if (numVendas == 0) {
        printf("\nNenhuma venda registrada!\n");
        return;
    }
    
    printf("\n--- Vendas Realizadas ---\n");
    for (int i = 0; i < numVendas; i++) {
        printf("\nVenda %d:", i+1);
        printf("\nID Cliente: %d", v[i].idCliente);
        printf("\nID Produto: %d", v[i].idProduto);
        printf("\nQuantidade: %d", v[i].quantProduto);
        printf("\nValor Total: R$ %.2f", v[i].valorTotal);
        printf("\n------------------------------------");
    }
    printf("\n\n");
}