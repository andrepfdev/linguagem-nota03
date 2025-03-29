#include <stdio.h>
#include "cliente.h"
#include "estruturas.h"

void cadastrarCliente(Cliente c[]) {
    for(int i=0; i < TAMCli; i++) {
        printf("Cliente %d, Primeiro Nome: ", i+1);
        scanf("%s", c[i].nome);
        c[i].id = i+1;
    }
}

void consultarCliente(Cliente *c) {
    for(int i=0; i < TAMCli; i++) {
        printf("\nId Cliente: %d.", c[i].id);
        printf("\nPrimeiro Nome: %s.", c[i].nome);
    }
    printf("\n\n");
}

// Função para validar se um cliente existe
// int validarCliente(Cliente c[], int id) {
//     for(int i=0; i < TAMCli; i++) {
//         if(c[i].id == id) {
//             return 1; // Cliente existe
//         }
//     }
//     return 0; // Cliente não existe
// }