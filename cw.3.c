#include <stdio.h>


int main () {
    int i, j;
 
    for(i=0; i<=10; ++i, printf("%4s","\n"))
    for(j=0; j<=10; ++j)
     if (i&&j) {
      printf("%4d", i*j);
     }
     else { 
      printf("%4s","");
 }
}
