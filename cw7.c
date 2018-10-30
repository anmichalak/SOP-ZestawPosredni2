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
int toInt(char napis[]){
  return atoi(napis); 
}


int main(int argc, char *argv[]){
  

  int x=toInt(argv[1]);

  int y=toInt(argv[2]);

  int dzielnik=nwd(x, y);
  printf("Najwiekszy wspolny dzielnik to:%d", dzielnik); 
} 
