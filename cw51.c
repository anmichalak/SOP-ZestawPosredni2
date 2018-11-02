#include <stdio.h>

int nwd(int a, int b){
  int r;
  r=a%b; 
  while(r!=0){
      a=b;
      b=r;
      r=a%b;
  }
 return b;
}

int main(){
  int x, y;

  printf("Podaj liczbe 1\n");
  scanf("%d", &x);
  
  printf("Podaj liczbe 2\n");
  scanf("%d", &y);
 
  int wynik = nwd(x, y);
  printf("Najwiekszy wspolny dzielnik %d", wynik);
  return 0;
}
