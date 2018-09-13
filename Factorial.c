#include <stdio.h>
int main (){
    int n;
    printf("Dame un numero\n");
    scanf("%d",&n);
    int i=1;
    int r=1;
    while(i<=n){
                r=r*i;
                i++;
                }
printf("El resultado es %d",r);
system("PAUSE");
return 0;
}
