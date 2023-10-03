#include<stdio.h> 
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int a=1;
    for(int p=1;p<=n;p++){
        printf("%d",p);
    }
    for(int q=n+1;q>=1;q--){
        printf("%d",q);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a-1);
            a--;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
    