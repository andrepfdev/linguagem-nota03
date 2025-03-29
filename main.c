#include <stdio.h>

#include <cliente.h>
#include <produto.h>
#include <vendas.h>

int main()
{

    int opcao, sair = 0;

    Cliente clientes[5];
    Produto produtos[5];

    do
    {
        printf("\n\n>>>> Sistema de Vendas <<<< ");
        printf("\n\t1 - Cadastrar Clientes");
        printf("\n\t2 - Cadastrar Produtos");
        printf("\n\t3 - Consultar Clientes");
        printf("\n\t4 - Consultar Produtos");
        printf("\n\t5 - Sair\n\t>>>> ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCliente(&clientes);
            break;
        case 2:
            cadastrarProduto(&produtos);
            break;
        case 3:
            consultarCliente(&clientes);
            break;
        case 4:
            consultarProduto(&produtos);
            break;
        case 5:
            sair = 1;
            break;
        default:
            printf("\n\nOpcao Invalida!");
            break;
        }
    } while (sair != 1);

    return 0;
}