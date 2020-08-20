/*Programa com o intuito de criar um 
BINGO através de um gerador de cartelas e sorteamento de bolas.
Um dos primeiros trabalhos da faculdade

Feito durante o 2º período; 
Terminado em: 24/06/2019
*/

#include<stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<conio.h>
#define TAM 5
#include "colors.h"
//funcao para Gerar a Cartela
void gerarCartela(int cartela[TAM][TAM]){
	
	int i, x=1, j,  verificadorSitual1, verificadorSitual2, verificadorSitual3, verificadorSitual4, verificadorSitual5, k1,k2,k3,k4,k5;
	srand((unsigned)time(NULL));
	while(x<=5){
		j=0;
		for(i=0;i<TAM;i++){
		
		 do {
         	cartela[i][j] = 1 + rand()%14;
          verificadorSitual1 = 1;
          for (k1 = 1; k1 < i; k1++)
             if (cartela[i][j] == cartela[k1][j])
                verificadorSitual1 = 0;
       } while (verificadorSitual1 == 0);  
}
		x++;
	}
	x=1;
	srand((unsigned)time(NULL));
	while(x<=5){
		j=1;
	for(i=0;i<TAM;i++){
		
		 do {
         	cartela[i][j] = 16 + rand()%14;
          verificadorSitual2 = 1;
          for (k2 = 1; k2 < i; k2++)
             if (cartela[i][j] == cartela[k2][j])
                verificadorSitual2 = 0;
       } while (verificadorSitual2 == 0);  
}
x++;
	}
	x=1;
srand((unsigned)time(NULL));
	while(x<=5){
		j=2;
		for(i=0;i<TAM;i++){
		
		 do {
         	cartela[i][j] = 31 + rand()%14;
          verificadorSitual3 = 1;
          for (k3 = 1; k3 < i; k3++)
             if (cartela[i][j] == cartela[k3][j])
                verificadorSitual3 = 0;
       } while (verificadorSitual3 == 0);  
}
x++;
	}
	x=1;
	srand((unsigned)time(NULL));
	while(x<=5){
		j=3;
		for(i=0;i<TAM;i++){
		
		 do {
         	cartela[i][j] = 46 + rand()%14;
          verificadorSitual4 = 1;
          for (k4 = 1; k4 < i; k4++)
             if (cartela[i][j] == cartela[k4][j])
                verificadorSitual4 = 0;
       } while (verificadorSitual4 == 0);  
}
x++;
	}
	x=1;
	srand((unsigned)time(NULL));
	while(x<=5){
		j=4;
	for(i=0;i<TAM;i++){
		
		 do {
         	cartela[i][j] = 61 + rand()%14;
          verificadorSitual5 = 1;
          for (k5 = 1; k5 < i; k5++)
             if (cartela[i][j] == cartela[k5][j])
                verificadorSitual5 = 0;
       } while (verificadorSitual5 == 0);  
}
x++;
}

}

void exibirCartela(int cartela[TAM][TAM]){
     int i,j;
     printf("----------------------------\n");
     printf("|");
        foreground(RED);
        	printf(" B     I     N    G    O ");
        foreground(BLACK);
        printf(" |\n");
     printf("----------------------------\n");		
	for(i=0;i<TAM;i++){
		printf("|");
		    for(j=0;j<TAM;j++){	
	       	    if(cartela[i][j]<10){
				     printf(" [0%d]", cartela[i][j]);	
			       }
			    else
				    printf(" [%d]", cartela[i][j]);
		          }
		printf(" |");
		printf("\n");
		 }	  
      printf("----------------------------\n");	
}


void copiarCartela(int cartela[TAM][TAM], int cartelaSalva[TAM][TAM]){
	int i,j;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			cartelaSalva[i][j] = cartela[i][j];
		}
	}
	
}
void exibirCopia(int cartelaSalva[TAM][TAM]){
	int i,j;
	foreground(BLUE);
	printf("---------------------------\n");
        	printf("|  B     I     N    G    O |\n");
     printf("---------------------------\n");		
	
	for(i=0;i<TAM;i++){
	  printf("|");
		for(j=0;j<TAM;j++){
			if(cartelaSalva[i][j]<10)
				printf(" [0%d]",cartelaSalva[i][j]);
			else
				printf(" [%d]",cartelaSalva[i][j]);
		}
		printf(" |");
		printf("\n");
	}
	 printf("----------------------------\n");	
	 foreground(BLACK);
}

void preencherVetorBolas(int vetorBolas[]){
	

 int i, j, verificadorSitual;
    
   	srand((unsigned)time(NULL));

    for (i = 0; i < 75; i++) {
       do {
          vetorBolas[i] = 1+ rand() % 74;
          verificadorSitual = 1;
          for (j = 1; j < i; j++)
             if (vetorBolas[i] == vetorBolas[j])
                verificadorSitual = 0;
       } while (verificadorSitual == 0);   
       
    }
}
void exibirBolas(int vetorBolas[]){
	int i;
	printf("\n");
	for(i=0;i<75;i++){
		
			printf("\t[%d]", vetorBolas[i]);
		
	}
	
	printf("\n");

}

void id(int l1,int l2, int l3,int l4, int l5, int c1,int c2,int c3,int c4,int c5,int dp,int ds){
	
	foreground(BLUE);
	if(l1==5)
	   printf("BINGO NA PRIMEIRA LINHA!!!!");
	if(l2==5)
	   printf("BINGO NA SEGUNDA LINHA!!!!");
	if(l3==5)
	   printf("BINGO NA TERCEIRA LINHA!!!!");
	if(l4==5)
	   printf("BINGO NA QUARTA LINHA!!!!");
	if(l5==5)
	   printf("BINGO NA QUINTA LINHA!!!!");
	if(c1==5)
	   printf("BINGO NA PRIMEIRA COLUNA!!!!");
	if(c2==5)
	   printf("BINGO NA SEGUNDA COLUNA!!!!");
	if(c3==5)
	   printf("BINGO NA TERCEIRA COLUNA!!!!");
	if(c4==5)
	   printf("BINGO NA QUARTA COLUNA!!!!");
	if(c5==5)
	   printf("BINGO NA QUINTA COLUNA!!!!");
	if(dp==5)
	   printf("BINGO NA DIAGONAL PRINCIPAL!!!!");
	if(ds==5)
	  printf("BINGO NA DIAGONAL SECUNDARIA!!!!");
	  
	foreground(BLACK);
}

void inicioJogo(int cartelaSalva[TAM][TAM], int vetorBolas[75]){
	
	                               //DECLARAÇÃO DE LINHAS, COLUNAS E DIAGONAIS PRINCIPAL E SECUNDÁRIA
	int i, j, l1,l2,l3,l4,l5;
	l1 = l2 = l3 = l4 = l5 = 0;
	int  c1,c2,c3,c4,c5;
	c1 = c2 = c3 = c4 = c5 = 0;
	int dp = 0, ds = 0;
	int vetorMarcar[TAM][TAM], bola_sorte, bola_anterior;        //VETOR QUE IRÁ MARCAR A CARTELA
	
	//zerando o vetor de comparacao
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			vetorMarcar[i][j] = 00;
		}
	}
	
	bola_anterior=0;
	int t;
	
		t = 1;	
				
		while(t<=75 && l1<5 && l2<5 && l3<5 && l4<5 && l5<5 && c1<5 && c2<5 && c3<5 && c4<5 && c5<5 && dp<5 && ds<5 ){
						
			printf("\nBola sorteada em primera instancia: %d\n", vetorBolas[t-1]);
			printf("Bola Anterior: %d\n", bola_anterior);
			printf("\nVerificando...");
			foreground(RED);
				printf("Marcando cartela: \n");
			for(i=0;i<TAM;i++){
				for(j=0;j<TAM;j++){
					if(vetorMarcar[i][j]<10){
					foreground(BLACK);
					printf("  [0%d]  ", vetorMarcar[i][j]);
					}else{
						foreground(RED);
					printf("  [%d]  ", vetorMarcar[i][j]);
					}
					
				}
				printf("\n");
			}
			
			for(i=0;i<TAM;i++){
				for(j=0;j<TAM;j++){
					if(cartelaSalva[i][j]==vetorBolas[t-1]){
					
					
					
					
					
						if(i==0){
								if(j==0){
									l1++;
									c1++;
									dp++;	
								}
								if(j==1){
									c2++;
									l1++;
								}
								if(j==2){
									c3++;
									l1++;
								}
								if(j==3){
									c4++;
									l1++;
								}
								if(j==4){
									c5++;
									l1++;
									ds++;
								}
								
							}
							if(i==1){
								if(j==0){
									l2++;
									c1++;
										
								}
								if(j==1){
									c2++;
									l2++;
									dp++;
								}
								if(j==2){
									c3++;
									l2++;
								}
								if(j==3){
								c4++;
									l2++;
									ds++;
								}
								if(j==4){
									c5++;
									l2++;
					
								}
							}
							if(i==2){
									if(j==0){
									l3++;
									c1++;
										
								}
					
								if(j==1){
									c2++;
									l3++;
							
								}
								if(j==2){
									c3++;
									l3++;
									dp++;
									ds++;
								}
								if(j==3){
									c4++;
									l3++;
								}
								if(j==4){
									c5++;
									l3++;
					
								}
							}
							if(i==3){
									if(j==0){
									l4++;
									c1++;
										
								}
								if(j==1){
									c2++;
									l4++;
									ds++;
								}
								if(j==2){
									c3++;
									l4++;
								}
								if(j==3){
									c4++;
									l4++;
									dp++;
								}
								if(j==4){
									c5++;
									l4++;
					
								}
							}
							if(i==4){
									if(j==0){
									l5++;
									c1++;
									ds++;
										
								}
								if(j==1){
									c2++;
									l5++;
									
								}
								if(j==2){
									c3++;
									l5++;
								}
								if(j==3){
									c4++;
									l5++;
								}
								if(j==4){
									c5++;
									l5++;
									dp++;
					
								}
							}
							
						vetorMarcar[i][j] = cartelaSalva[i][j];		
					}
					
				}
			}
			
			system("pause");
			system("cls");
			printf("Bola sorteada: %d\n", vetorBolas[t]);
			foreground(BLUE);
			printf("Cartela Matriz: \n");
			foreground(BLACK);
			for(i=0;i<TAM;i++){
				for(j=0;j<TAM;j++){
					if(cartelaSalva[i][j]<10)
					printf("  [0%d]  ", cartelaSalva[i][j]);
					else
					printf("  [%d]  ", cartelaSalva[i][j]);
				}
				printf("\n");
			}
			
		
	

	bola_anterior = vetorBolas[t-1];

		foreground(GREEN);
		//Este script foi criado para visualizar o comportamento de marcação das bolas sorteadas, tipo um MAPEAMENTO
			printf("\tLinha 1: %d\n", l1);
			printf("\tLinha 2: %d\n", l2);
			printf("\tLinha 3: %d\n", l3);
			printf("\tLinha 4: %d\n", l4);
			printf("\tLinha 5: %d\n", l5);
			printf("\tColuna 1: %d\n", c1);
			printf("\tColuna 2: %d\n", c2);
			printf("\tColuna 3: %d\n", c3);
			printf("\tColuna 4: %d\n", c4);
			printf("\tColuna 5: %d\n", c5);
			printf("\tDiagonal Princ: %d\n", dp);
			printf("\tDiagonal Sec: %d\n", ds);
			foreground(BLACK);
		t++;
		
				
		}
	
	
	for(i=0;i<TAM;i++){
				for(j=0;j<TAM;j++){
							
					if(vetorMarcar[i][j]<10){	
					
					printf("  [0%d]  ", vetorMarcar[i][j]);
					}
					else{
					
					printf("  [%d]  ", vetorMarcar[i][j]);
					}
					
				} 
					printf("\n");
	}
	printf("\nBingo...");
	id(l1,l2,l3,l4,l5,c1,c2,c3,c4,c5,dp,ds);
	printf("\n\n");
}


int main(){	
	system("color F0");
	
	int i, j, op, opcao, bola, cartela[TAM][TAM], cartelaSalva[TAM][TAM];
	int vetorBolas[75];
	preencherVetorBolas(vetorBolas);
		foreground(RED);
	printf("-------BEM VINDO AO SISTEMA BINGOL----\n\n");
	      foreground(GREEN);

	printf("->MENU INICIAL<-\n");
	      foreground(BLUE);
	printf("\t\n1 - Gerar Cartela no Sistema");
	printf("\t\n0 - Sair do Sistema\n");
	foreground(RED);
	scanf("%d", &op);
	system("cls");
	foreground(BLACK);
	if(op==1){
	
	
	gerarCartela(cartela);
	printf("\n\tCartela MATRIZ: \n");
	exibirCartela(cartela);
	copiarCartela(cartela,cartelaSalva);
	printf("\n\n");
	system("cls");
	printf("Cartela Gerada: \n");
	exibirCopia(cartelaSalva);
	printf("\n\n");
	printf("\t\tMenu de Jogo\n");
	printf("\t\t1 - Iniciar Jogo\n");
	printf("\t\t0 - Sair do Jogo\n");
	scanf("%d", &opcao);
		
	while(opcao==1){
			do{
			inicioJogo(cartelaSalva, vetorBolas);
			foreground(RED);
		printf("\nDeseja jogar novamente? (Se sim, automaticamente a cartela sera gerada)\n");
		
			printf("\t1 - SIM\n");
			printf("\t0 - NAO\n");
			scanf("%d", &opcao);
			if(opcao==0){
					for(i=0;i<100;i++){
			printf("Saindo...");
			system("cls");
			
		}
				
			return 0;		
			}
			gerarCartela(cartela);
			exibirCartela(cartela);
			copiarCartela(cartela,cartelaSalva);
			printf("Cartela Gerada: \n");
			exibirCopia(cartelaSalva);
			
		
	}while(opcao!=1);	
				
	}
					
	}
	else{
		for(i=0;i<100;i++){
			printf("Saindo...");
			system("cls");
		
		}
			return 0;
	}

	getch();
	
	return 0;
}