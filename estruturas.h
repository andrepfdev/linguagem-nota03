#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

// Constantes
#define TAMCli 3
#define TAMProd 3
#define TAMVenda 10

// Estrutura para Produtos
typedef struct {
    int id;
    char nome[20];
    int quantidade;
    float valor;
} Produto;

// Estrutura para Clientes
typedef struct {
    int id;
    char nome[20];
} Cliente;

// Estrutura para Vendas
typedef struct {
    int idCliente;
    int idProduto;
    int quantProduto;
    float valorTotal;
} Venda;

#endif