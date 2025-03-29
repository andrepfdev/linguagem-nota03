#include <stdio.h>
#include "vendas.h"
#include "estruturas.h"
#include "cliente.h"
#include "produto.h"

// Função para realizar uma venda
void realizarVenda(Venda v[], Cliente c[], Produto p[], int *numVendas) {
    int idCliente, idProduto, quantidade;
    
    printf("\n==== Realizar Venda ====\n");
    
    // Solicitar ID do cliente
    printf("ID do Cliente: ");
    scanf("%d", &idCliente);
    if (!validarCliente(c, idCliente)) {
        printf("Cliente não encontrado!\n");
        return;
    }
    
    // Solicitar ID do produto
    printf("ID do Produto: ");
    scanf("%d", &idProduto);
    if (!validarProduto(p, idProduto)) {
        printf("Produto não encontrado!\n");
        return;
    }
    
    // Solicitar quantidade
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    if (!verificarEstoque(p, idProduto, quantidade)) {
        printf("Estoque insuficiente!\n");
        return;
    }
    
    // Calcular valor total
    float valorTotal = calcularValorTotal(p, idProduto, quantidade);
    
    // Registrar a venda
    v[*numVendas].idCliente = idCliente;
    v[*numVendas].idProduto = idProduto;
    v[*numVendas].quantProduto = quantidade;
    v[*numVendas].valorTotal = valorTotal;
    
    // Atualizar estoque
    atualizarEstoque(p, idProduto, quantidade);
    
    // Incrementar contador de vendas
    (*numVendas)++;
    
    printf("Venda realizada com sucesso! Valor Total: %.2f\n", valorTotal);
}

// Função para calcular o valor total de uma venda
float calcularValorTotal(Produto p[], int idProduto, int quantidade) {
    for(int i=0; i < TAMProd; i++) {
        if(p[i].id == idProduto) {
            return p[i].valor * quantidade;
        }
    }
    return 0.0;
}

// Função para consultar todas as vendas
void consultarVenda(Venda v[], int numVendas) {
    printf("\n==== Consulta de Vendas ====\n");
    
    if (numVendas == 0) {
        printf("Nenhuma venda registrada!\n");
        return;
    }
    
    for (int i = 0; i < numVendas; i++) {
        printf("\nVenda %d:", i+1);
        printf("\nID Cliente: %d", v[i].idCliente);
        printf("\nID Produto: %d", v[i].idProduto);
        printf("\nQuantidade: %d", v[i].quantProduto);
        printf("\nValor Total: R$ %.2f", v[i].valorTotal);
        printf("\n----------------------------------");
    }
    printf("\n\n");
}