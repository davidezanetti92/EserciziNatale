#include <stdio.h>
#include <math.h>

void calc(char c, int x, int y){
switch(c){
case '+' : printf("%d\n",x+y); break;
case '-' : printf("%d\n",x-y) ;break;
case '/' : printf("%d\n",x/y) ;break;
case '*' : printf("%d\n",x*y) ;break;
case '^' : printf("%f\n",pow(x,y)); break;
case 'a' : printf("%f %f\n",sqrt(x),sqrt(y)); break;
}

}

int main(){
int x;
int y;
char c;
while(1){
scanf("%d%c%d",&x,&c,&y);
calc(c,x,y);
}
}
