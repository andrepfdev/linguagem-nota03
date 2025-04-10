#include <stdio.h>
#include "produto.h"

void cadastrarProduto(Produto p[])
{
    for (int i = 0; i < TAMProd; i++)
    {
        printf("\nPrimeiro Nome do Produto %d: ", i + 1);
        scanf("%s", p[i].nome);
        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);
        printf("Valor: ");
        scanf("%f", &p[i].valor);
        p[i].id = i + 1;
    }
}

void consultarProduto(Produto p[])
{
    for (int i = 0; i < TAMProd; i++)
    {
        printf("\nId Produto: %d.", p[i].id);
        printf("\nNome Produto: %s.", p[i].nome);
        printf("\nQuantidade: %d.", p[i].quantidade);
        printf("\nValor: %.2f.", p[i].valor);
        printf("\n----------------------------------");
    }
    printf("\n\n");
}

int produtoExiste(Produto p[], int id)
{
    // Verifica se o produto com o ID fornecido existe
    for (int i = 0; i < TAMProd; i++)
    {
        if (p[i].id == id)
        {
            return 1; // Produto existe
        }
    }
    return 0; // Produto não existe
}

int verificarEstoque(Produto p[], int id, int quantidade)
{
    // Verifica se há estoque suficiente para o produto
    for (int i = 0; i < TAMProd; i++)
    {
        if (p[i].id == id)
        {
            return (p[i].quantidade >= quantidade);
        }
    }
    return 0; // Produto não encontrado
}

void atualizarEstoque(Produto p[], int id, int quantidade)
{
    // Atualiza o estoque após uma venda
    for (int i = 0; i < TAMProd; i++)
    {
        if (p[i].id == id)
        {
            p[i].quantidade -= quantidade;
            break;
        }
    }
}

float obterValorProduto(Produto p[], int id)
{
    // Retorna o valor do produto com o ID fornecido
    for (int i = 0; i < TAMProd; i++)
    {
        if (p[i].id == id)
        {
            return p[i].valor;
        }
    }
    return 0.0; // Produto não encontrado
}