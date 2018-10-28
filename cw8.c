#include<stdio.h>

int toHex(int decimalnumber, int reszta){
   
   printf("Enter number to convert:", decimalnumber);
   scanf("%d", &decimalnumber);
   int a;  
   
     while(decimalnumber>0){
       reszta  = decimalnumber%16;
       if( reszta>9){
          switch (reszta) {
          case 10:
             printf("A");
             break;
          case 11:
             printf("B");
             break;
          case 12:
             printf("C");
             break;
          case 13:
              printf("D");
             break;
          case 14:
            printf("E");
             break;
          case 15:
             printf("F");
             break;
          case 16:
            printf("G");
             break;
          case 17:
             printf("H");
             break;
          case 18:
           printf("I");
             break;
         }
       else {
         printf("%d", reszta);
       } 
       decimalnumber = decimalnumber/16;
     }
   }
}
int main() {
 int a = toHex;
 printf("Twój wynik to:", a);
}
