#include <stdio.h>
#include <stdlib.h>

void stampa(int *a, int n){
int x=0;
while(x<n){
printf("%d ",a[x]);
x++;
}
printf("\n");
}



void sinistra(int *a, int n){
int x=0;
while(x<n){
a[x]=a[x+1];
x++;
 }
}

void destra(int *a, int n){
int x=0;
while(x<n){
a[n-1]=a[n-2];
n--;
 }
}

int main(){
int n;
printf("lunghezza vettore: ");
scanf("%d",&n);
int *a;
a=malloc(n*sizeof(int));
int x=0;
while(x<n){
printf("numero da inserire: ");
scanf("%d",&a[x]);
x++;
}
char c;
printf("'s' per sinistra, 'd' per destra '0' per stop, 'c' per stampare\n");
while(c!='0'){
scanf("%c",&c);
if(c=='s'){sinistra(a,n);}
else if(c=='d'){destra(a,n);}
else if(c=='c'){stampa(a,n);}
}


}
