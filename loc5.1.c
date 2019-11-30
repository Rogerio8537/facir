#include <stdio.h>

//filme
void cadastrarFilme(char titulo, int ano, int genero);
void atualizarFilme(int identificador,char titulo, int ano, char genero);
void removerFilme(int identificador);
void listarFilme();
void visualizarFilme(int identificador);
void pesquizarFilme(char titulo);

//Cliente
void cadastrarCliente(int identificadorCliente, char nome, char cpf, char email);
void atualizarCliente(char nome, char cpf, char email);
void removerCliente(int identificadorCliente);
void listarCliente();
void VisualizarCliente(int identificadorCliente);
void PesquizarCliente(int identificadorCliente);

//Estoque
void cadastrarEstoque(int identificador, int identificadorFilme, char dataentrada);
void atualizarEstoque(int identificador, int identificadorFilme, char dataentrada);
void removerEstoque(int identificadorFilme);
void listarEstoque(int identificadorFilme);
void VisualizarEstoque();
void PesquizarEstoque(int identificadorFilme);

//Aluguel
void cadastrarAluguel(int identificador, int identificadorEstoque,int identificadorCliente, char dataAluguel, char dataDevolucao);
void atualizarAluguel();
void removerAluguel();
void listarAluguel();
void VisualizarAluguel();
void PesquizarAluguel();



void main(){

}
