#ifndef DEFINICOES_H
#define DEFINICOES_H

#define TAMCli 3
#define TAMProd 3
#define TAMVenda 10

typedef struct
{
    int id;
    char nome[20];
    int quantidade;
    float valor;
} Produto;

typedef struct
{
    int id;
    char nome[20];
} Cliente;

typedef struct
{
    int idCliente;
    int idProduto;
    int quantProduto;
    float valorTotal;
} Venda;

#endif