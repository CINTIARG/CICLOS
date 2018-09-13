#include <stdio.h>
int main(){
    int n,i;
    printf("Dame un numero");
    scanf("%d",&n);
   i=2;
   while (n%i!=0){
         i++;
         }
         if(i==0){
                  printf("PRIMO");
                  } else {
                         printf("NO PRIMO");
                         }
system("PAUSE");
   return 0;
}
    
