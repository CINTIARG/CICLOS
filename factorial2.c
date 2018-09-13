#include <stdio.h>
int main (){
    int n=0,r;
    printf("Inserta un numero");
    scanf("%d",&n);
    int resultado=1;
    while(n>0) {
               resultado=resultado*n;
               n--;
               }
    printf("El resultado es %d",resultado);
    system("PAUSE");
    return 0;
}
