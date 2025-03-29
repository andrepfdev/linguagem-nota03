#ifndef VENDA_H
#define VENDA_H

#include "estruturas.h"
#include "cliente.h"
#include "produto.h"

// Protótipos das funções relacionadas a vendas
void realizarVenda(Venda v[], Cliente c[], Produto p[], int *numVendas);
void consultarVenda(Venda v[], int numVendas);
float calcularValorTotal(Produto p[], int idProduto, int quantidade);

#endif