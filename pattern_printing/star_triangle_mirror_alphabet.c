#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int nsp=n-1;
    int nalpha=1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nalpha;k++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        nsp--;
        nalpha++;
        printf("\n");
    }
    return 0;
}