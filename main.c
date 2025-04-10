#include <stdio.h>
#include "estruturas.h"
#include "cliente.h"
#include "produto.h"
#include "vendas.h"

int main()
{
    int opcao, sair = 0;
    Cliente clientes[TAMCli];
    Produto produtos[TAMProd];
    Venda vendas[TAMVenda];
    int numVendas = 0;

    do
    {
        printf("\n\n\t>>>> Sistema de Vendas <<<< ");
        printf("\n\t1 - Cadastrar Clientes");
        printf("\n\t2 - Cadastrar Produtos");
        printf("\n\t3 - Consultar Clientes");
        printf("\n\t4 - Consultar Produtos");
        printf("\n\t5 - Realizar Venda");
        printf("\n\t6 - Consultar Vendas");
        printf("\n\t7 - Sair\n\t>>>> ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCliente(clientes);
            break;
        case 2:
            cadastrarProduto(produtos);
            break;
        case 3:
            consultarCliente(clientes);
            break;
        case 4:
            consultarProduto(produtos);
            break;
        case 5:
            realizarVenda(vendas, &numVendas, clientes, produtos);
            break;
        case 6:
            consultarVendas(vendas, numVendas);
            break;
        case 7:
            sair = 1;
            break;
        default:
            printf("\n\nOpcao Invalida!");
        }
    } while (sair != 1);

    return 0;
}