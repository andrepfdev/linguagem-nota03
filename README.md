# Sistema de Vendas em C - README

## Visão Geral do Projeto
Este é um sistema de vendas modular desenvolvido em C, com funcionalidades para gerenciar clientes, produtos e vendas. O código foi organizado em módulos para facilitar a colaboração em equipe e a manutenção do projeto.

---

## 📂 Módulos do Sistema
| Módulo       | Arquivos         | Responsabilidade                                |
|--------------|------------------|-----------------------------------------------|
| **Clientes** | `cliente.h/.c`   | Cadastro e consulta de clientes               |
| **Produtos** | `produto.h/.c`   | Cadastro e consulta de produtos               |
| **Vendas**   | `venda.h/.c`     | Processamento e consulta de vendas            |
| **Principal**| `main.c`         | Menu interativo e lógica central do sistema   |

---

## 👥 Contribuições da Equipe
Cada membro do grupo foi responsável por um módulo específico:

| Membro      | Módulo          | Tarefas                                      |
|-------------|-----------------|---------------------------------------------|
| Jaqueline  | `Clientes`      | Implementou `cadastrarCliente()` e `consultarCliente()` |
| Rivaldo | `Produtos`      | Desenvolveu `cadastrarProduto()` e `consultarProduto()` |
| Emerson | `Vendas`        | Criou `realizarVenda()` e `consultarVendas()`           |
| André    | `Principal`     | Integrou módulos e desenvolveu o menu (`main.c`)        |

---

## 🛠 Como Compilar o Código

### Pré-requisitos:
- Compilador GCC instalado.

### Passo a Passo:
1. **Compilação Direta** (recomendado):
   ```bash
   gcc main.c cliente.c produto.c venda.c -o sistema_vendas
   ```
