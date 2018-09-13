#include<stdio.h>
int main(){
    int n,i=0,c=0,r;
    printf("Que tabla quieres ver?");
    scanf("%d",&n);
    while(i<=9){
                i++;
                c++;
                r=n*c;
                printf("\n%dx%d =%d",n,c,r);
                }
    printf("\nFinal...\n");
    system("PAUSE");
    return 0;
}
