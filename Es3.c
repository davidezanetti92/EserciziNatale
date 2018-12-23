#include <stdio.h>

int fat(int x){
int sum=0;
int c=0;
while(c<=x){
sum+=c;
c++;
}
return sum;
}

int main(){

int x;
printf("Numero per il fattoriale:");
scanf("%d",&x);
printf("fattoriale=%d\n",fat(x));


}
