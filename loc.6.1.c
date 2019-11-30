#include <stdio.h>
		#include <stdlib.h>

		typedef struct
		{
		int id;
		char titulo[100];
		int ano;
		char genero[20];
		}Tfilme;
		printf("Titulo do Filme     :");
		scanf("%d",&titulo);
		printf("Ano do Filme        :");
		scanf("%d",&ano);
		printf("Genero do Filme     :");
		scanf("%d",&genero);

		typedef struct{
		char nome[100];
		char cpf[14];
		char e-mail[100];
		}Tcliente;
       		printf("Nome do cliente:  ");
      		scanf("%d",&nome);
        	printf("CPF do Cliente:  ");
        	scanf("%d",&cpf);
        	printf("E-mail do Cliente:  ");
        	scanf("%d",&e-mail);

		typedef struct{
		int ocupados;
		int tamanho;
		Tfilme[100];
		}Tfilmes;

		typedef struct{
		int ocupados;
		int tamanho;
		Tcliente cliente[100]
		}Tclientes;

		void main(){
		Tfilmes filmes;
		char titulo[100];
		int ano;
		char genero[20];
		scanf("%s",titulo);
		scanf("%d"&ano);
		filmes ->ocupados=0;
		filmes ->tamanho=100;
		cadastro filme(&filmes,titulo,ano,genero);
		void cadastro filme(tfilmes *f,
		char titulo[100],
		int ano,
		char genero[20]){
		if(f->ocupados<f->tamanho)
		{
		f-> filmes[f->ocupados]->id=f->ocupados;
		f-> filmes[f->ocupados]->titulo=titulo;
		                       ->ano=ano;
		                       ->genero=genero;
		                       f->ocupados;
		}
		}
		}

