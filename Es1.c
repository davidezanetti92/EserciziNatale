#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define negativo 0
#define positivo 1
#define pari 2
#define dispari 3

uint8_t funzione_1(int x){
if(x<0){return negativo;}
else return positivo;
}

uint8_t funzione_2(int x){
if(x%2==0){return pari;}
else return dispari;
}


int main(){
int somma=0;
int somma_assoluta=0;
int x;
printf("Premi 0 per interrompere\n");
while(1){
printf("inserire numero: ");
scanf("%d",&x);
if(x==0){break;}
somma=somma+x;
somma_assoluta+=abs(x);
if(funzione_1(x)==positivo){printf("Positivo ");}
else printf("Negativo ");
if(funzione_2(x)==pari){printf("e pari\n");}
else printf("e dispari\n");

printf("somma=%d\n",somma);
printf("somma assoluta=%d\n\n",somma_assoluta);
}


}
