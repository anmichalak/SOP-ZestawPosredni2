#include <stdio.h>

int main(){
  int a, b;

  printf("Podaj liczbe 1\n");
  scanf("%d", &a);
  
  printf("Podaj liczbe 2\n");
  scanf("%d", &b);

    while(a!=b){
      if(a>b){  
       a -= b;
      }
      else
       b -= a;     
   }  
   printf("Najwiekszy wspolny dzielnik %d", a);
  return 0;
}
