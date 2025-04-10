#ifndef VENDA_H
#define VENDA_H

#include "estruturas.h"
#include "cliente.h"
#include "produto.h"

void realizarVenda(Venda v[], int *numVendas, Cliente c[], Produto p[]);
void consultarVendas(Venda v[], int numVendas);

#endif