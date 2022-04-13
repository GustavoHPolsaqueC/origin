#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 200

struct informacoes{
	char titulo[15];
	int codigo;
	char descricao[15];
	int ano;
	int status;
	char ger_proj[12];
	int quant_pes;
	float gastos;
	char setor[15];
}info[MAX][9];

int main(){
	int c,r,i;
	char e;
	r==0;
	c==0;
	setlocale(LC_ALL, "Portuguese");
	do{
		system("cls");
		i==0;
		e='s';
		printf("Bem-vindo, digite qual op��o deseja usar:\n");
		printf("1- Cadastrar um projeto\n");
		printf("2- Todos os projetos registrados\n");
		printf("3- Projetos com status: A fazer\n");
		printf("4- Projetos com status: Fazendo\n");
		printf("5- Projetos com status: Conclu�do\n");
		printf("6- Pesquisar pelo c�digo\n");
		printf("7- Sair\n");
		scanf("%d",&r);
		switch(r){
			case 1:
				while(i<MAX && e!='n'){
					system("cls");
					printf("\nDigite o t�tulo do projeto: ");
					fflush(stdin);
					gets(info[i][0].titulo);
					printf("\nFa�a uma breve descri��o do projeto: ");
					fflush(stdin);
					gets(info[i][1].descricao);
					printf("\nDigite o ano em que este projeto foi criado: ");
					fflush(stdin);
					scanf("%d",&info[i][2].ano);
					printf("\nO projeto esta com o status: [1] A fazer, [2] Fazendo ou [3] Conclu�do\n ");
					fflush(stdin);
					scanf("%d",&info[i][3].status);
					printf("\nDigite o nome do Gerente de Projetos respons�vel: ");
					fflush(stdin);
					gets(info[i][4].ger_proj);
					printf("\nQuantas pessoas fazem parte desse projeto: ");
					fflush(stdin);
					scanf("%d",&info[i][5].quant_pes);
					printf("\nDe quanto � o or�amento destinado: R$");
					fflush(stdin);
					scanf("%f",&info[i][6].gastos);
					printf("\nEm qual setor ser� aplicado: ");
					fflush(stdin);
					gets(info[i][7].setor);
					info[i][8].codigo = i+1;
					printf("\nCodigo: %d", info[i][8].codigo);
					printf("\nDeseja cadastrar outro projeto? s[Sim], n[N�o]\n");
					scanf("%c",&e);	
					system("pause");
				}
				break;
			case 2:
				system("cls");
				for(i=0;i<MAX;i++);{
					printf("\n******************************");
					printf("\nProjeto: %s", info[i][0].titulo);
					printf("\nDescri��o do projeto: %s", info[i][1].descricao);
					printf("\nAno de cria��o: %d", info[i][2].ano);
					printf("\nStatus: %d", info[i][3].status);
					printf("\nGerente de Projetos respons�vel: %s", info[i][4].ger_proj);
					printf("\nQuantidade de pessoas envolvidas: %d", info[i][5].quant_pes);
					printf("\nOr�amento destinado: R$%.2f", info[i][6].gastos);
					printf("\nSetor aplicado: %s", info[i][7].setor);
					printf("\nCodigo: %d", info[i][8].codigo);
					printf("\n");
				}
				system("pause");
				break;
			case 3:
				system("cls");
				for(i=0;i<MAX;i++);{
					if (info[i][3].status == 1){
						printf("\n******************************");
						printf("\nProjeto: %s", info[i][0].titulo);
						printf("\nDescri��o do projeto: %s", info[i][1].descricao);
						printf("\nAno de cria��o: %d", info[i][2].ano);
						printf("\nStatus: %d", info[i][3].status);
						printf("\nGerente de Projetos respons�vel: %s", info[i][4].ger_proj);
						printf("\nQuantidade de pessoas envolvidas: %d", info[i][5].quant_pes);
						printf("\nOr�amento destinado: R$%.2f", info[i][6].gastos);
						printf("\nSetor aplicado: %s", info[i][7].setor);
						printf("\nCodigo: %d", info[i][8].codigo);
						printf("\n");
					}
				}
				system("pause");
				break;
			case 4:
				system("cls");
				for(i=0;i<MAX;i++);{
					if (info[i][3].status == 2){
						printf("\n******************************");
						printf("\nProjeto: %s", info[i][0].titulo);
						printf("\nDescri��o do projeto: %s", info[i][1].descricao);
						printf("\nAno de cria��o: %d", info[i][2].ano);
						printf("\nStatus: %d", info[i][3].status);
						printf("\nGerente de Projetos respons�vel: %s", info[i][4].ger_proj);
						printf("\nQuantidade de pessoas envolvidas: %d", info[i][5].quant_pes);
						printf("\nOr�amento destinado: R$%.2f", info[i][6].gastos);
						printf("\nSetor aplicado: %s", info[i][7].setor);
						printf("\nCodigo: %d", info[i][8].codigo);
						printf("\n");
					}
				}
				system("pause");
				break;
			case 5:
				system("cls");
				for(i=0;i<MAX;i++);{
					if (info[i][3].status == 3){
						printf("\n******************************");
						printf("\nProjeto: %s", info[i][0].titulo);
						printf("\nDescri��o do projeto: %s", info[i][1].descricao);
						printf("\nAno de cria��o: %d", info[i][2].ano);
						printf("\nStatus: %d", info[i][3].status);
						printf("\nGerente de Projetos respons�vel: %s", info[i][4].ger_proj);
						printf("\nQuantidade de pessoas envolvidas: %d", info[i][5].quant_pes);
						printf("\nOr�amento destinado: R$%.2f", info[i][6].gastos);
						printf("\nSetor aplicado: %s", info[i][7].setor);
						printf("\nCodigo: %d", info[i][8].codigo);
						printf("\n");
					}
				}
				system("pause");
				break;
			case 6:
				system("cls");
				printf("\nDigite o codigo do projeto que deseja: ");
				scanf("%d",&c);
				for(i=0;i<MAX;i++);{
					if (info[i][8].codigo == c){
						printf("\nProjeto: %s", info[i][0].titulo);
						printf("\nDescri��o do projeto: %s", info[i][1].descricao);
						printf("\nAno de cria��o: %d", info[i][2].ano);
						printf("\nStatus: %d", info[i][3].status);
						printf("\nGerente de Projetos respons�vel: %s", info[i][4].ger_proj);
						printf("\nQuantidade de pessoas envolvidas: %d", info[i][5].quant_pes);
						printf("\nOr�amento destinado: R$%.2f", info[i][6].gastos);
						printf("\nSetor aplicado: %s", info[i][7].setor);
						printf("\nCodigo: %d", info[i][8].codigo);
						printf("\n");
					}
				}
				system("pause");
				break;
			case 7: 
				printf("\nSaindo...");
				break;
		}
	}while (r!=7);
	return (0);
}
