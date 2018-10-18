#include <stdio.h>

int toInt(char napis[]){
 return atoi(napis); 
}
int main(){
  int g=toInt("25");
  printf("%d", g); 
} 
