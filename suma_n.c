#include <stdio.h>
int main (){
    int n;
    printf("Cuantos numeros quieres sumar?");
    scanf("%d",&n);
    int i=0;
    int r=0,o;
    while(i<n){
    i++;
    printf("Dame el numero %d\n",i);
    scanf("%d",&o);
    r=r+o;
}
printf("El resultado es %d",r);
system("PAUSE");
return 0;
}
