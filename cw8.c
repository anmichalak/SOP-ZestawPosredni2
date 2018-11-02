#include<stdio.h>

int toHex(int dec){

int reszta;
int index = 0;
int result[8];
int iterator;

 while(dec != 0){
   reszta=dec%16;
    if(reszta > 9){
      result[index++] = reszta + 55;
      dec = dec/16;
     }
     else{
      result[index++]=reszta+48;
      dec= dec/16;
     }
 }
 for(iterator=index-1;iterator >= 0;iterator--){
  printf("%c", result[iterator]);
  }
}


int main(){
  int dec;
  printf("Wpisz liczbe: ", dec);
  scanf("%d", &dec);
  toHex(dec);

} 
