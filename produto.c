#include <stdio.h>
#include "produto.h"
#include "estruturas.h"

void cadastrarProduto(Produto p[]) {
    for(int i=0; i < TAMProd; i++) {
        printf("\nPrimeiro Nome do Produto %d: ", i+1);
        scanf("%s", p[i].nome);
        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);
        printf("Valor: ");
        scanf("%f", &p[i].valor);
        p[i].id = i+1;
    }
}

void consultarProduto(Produto p[]) {
    for(int i=0; i < TAMProd; i++) {
        printf("\nId Produto: %d.", p[i].id);
        printf("\nNome Produto: %s.", p[i].nome);
        printf("\nQuantidade: %d.", p[i].quantidade);
        printf("\nValor: %.2f.", p[i].valor);
        printf("\n----------------------------------");
    }
    printf("\n\n");
}

// Função para validar se um produto existe
// int validarProduto(Produto p[], int id) {
//     for(int i=0; i < TAMProd; i++) {
//         if(p[i].id == id) {
//             return 1; // Produto existe
//         }
//     }
//     return 0; // Produto não existe
// }

// // Função para verificar se há estoque suficiente
// int verificarEstoque(Produto p[], int id, int quantidade) {
//     for(int i=0; i < TAMProd; i++) {
//         if(p[i].id == id) {
//             return (p[i].quantidade >= quantidade); // Retorna 1 se houver estoque suficiente
//         }
//     }
//     return 0; // Retorna 0 se não houver estoque ou produto não encontrado
// }

// // Função para atualizar o estoque após uma venda
// void atualizarEstoque(Produto p[], int id, int quantidade) {
//     for(int i=0; i < TAMProd; i++) {
//         if(p[i].id == id) {
//             p[i].quantidade -= quantidade;
//             break;
//         }
//     }
// }