#ifndef CLIENTE_H
#define CLIENTE_H

#include "estruturas.h"

void cadastrarCliente(Cliente c[]);
void consultarCliente(Cliente c[]);
int clienteExiste(Cliente c[], int id);
int validarCliente(Cliente c[], int id);

#endif