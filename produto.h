#ifndef PRODUTO_H
#define PRODUTO_H

#include "estruturas.h"

void cadastrarProduto(Produto p[]);
void consultarProduto(Produto p[]);
int produtoExiste(Produto p[], int id);
int verificarEstoque(Produto p[], int id, int quantidade);
void atualizarEstoque(Produto p[], int id, int quantidade);
float obterValorProduto(Produto p[], int id);

#endif