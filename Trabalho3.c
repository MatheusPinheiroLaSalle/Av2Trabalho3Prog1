/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Matheus Pinheiro - matricula: 0050013552
* Professor: Alex Salgado 
***************************************/

#include <stdio.h>

int main()
{
    int mapa[5][5]={{1, 0, 0, 0, 0},
                    {0, 1, 0, 0, 0},
                    {0, 0, 1, 0, 0},
                    {0, 0, 0, 1, 0},
                    {0, 0, 0, 0, 1}};
    int i, j, continuar=0, pontos=0;
    char nome[15];
    
    printf("Qual é seu nome?");
    scanf("%s", nome);
    
 do{
 
   
    for (i=0; i<=4; i++)
     {
         for(j=0; j<=4; j++)
         {         
                   printf(" * ");
         }
         printf("\n");
     }
   
        printf("\n Entre com a linha:\n");
        scanf("%d", &j);
    
    
        printf("\n Entre com a coluna:\n");
        scanf("%d", &i);
   
        if(mapa[i][j]==1){
        
        printf("você acertou, ganhou um ponto !!");
        pontos++;
    }        
        else if(mapa[i][j]==0){
        
        printf("você errou !!");
    
            
    }
    printf("\n Deseja continuar(s=0/n=1)?");
    scanf(" %d", &continuar);

 } while(continuar == 0);
 
 printf ("Olá %s, você fez %d pontos!!", nome, pontos);
    
    return 0;   
}