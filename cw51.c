#include <stdio.h>

int main(){
  int a, b;

  printf("Podaj liczbe 1\n");
  scanf("%d", &a);
  
  printf("Podaj liczbe 2\n");
  scanf("%d", &b);

  int r;
  r=a%b;
  
    while(r!=0){
      a=b;
      b=r;
      r=a%b;     
    }
     printf("Najwiekszy wspolny dzielnik %d", b);
     return 0;
}
