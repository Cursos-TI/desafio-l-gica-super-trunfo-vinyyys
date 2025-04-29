#include<stdio.h>
#include<string.h>
void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} }
 
 int main(){

char nome1[50],nome2[40];
int populacao1,populacao2;
float area1,area2;
float PIB1,PIB2;
int Nturistas1,Nturistas2;

printf("          JOGO SUPER TRUNFO\n");
printf("\n");
printf("PRIMEIRA CARTA \n");
printf("Nome da cidade= ");
fgets(&nome1,50,stdin);
printf("número da população ");
scanf("%d" , &populacao1);
printf("tamanho da área ") ;
scanf("%f" , &area1);
printf("valor PIB ");
scanf("%f" , &PIB1);
printf("Número de turistas ");
scanf("%d", &Nturistas1);
printf("\n");

printf("SEGUNDA CARTA \n");
printf("Nome da cidade= " );
limpar_entrada();
fgets(nome2,40,stdin);
printf("número da população ");
scanf("%d" , &populacao2);
printf("tamanho da área ") ;
scanf("%f" , &area2);
printf("valor PIB ");
scanf("%f" , &PIB2);
printf("Número de turistas ");
scanf("%d", &Nturistas2);
printf("\n");

printf("       CARTAS CADASTRADAS\n");

printf("Nome da cidade=%s",nome1);
printf("CARTA 1\n");                
printf("população= %d \n " , populacao1);
printf("areas= %.2f \n " , area1);
printf("PIB= %.2f \n " , PIB1);
printf("Números de turistas= %d \n " , Nturistas1);
printf("\n");

printf("CARTA 2\n"); 
printf("Nome da cidade=%s",nome2);               
printf("população= %d \n " , populacao2);
printf("Área= %.2f \n " , area2);
printf("PIB= %.2f \n " , PIB2);
printf("Números de turistas= %d \n " , Nturistas2);
printf("\n");

if(populacao1>populacao2){
printf("A CIDADE DE VENCEDORA FOI %s COM UM TOTAL DE %d de população",nome1,populacao1);
}
else{ 
printf("A CIDADE DE VENCEDORA FOI %sCOM UM TOTAL DE %d DE POPULAÇÃO",nome2,populacao2);
}
    return 0;
}