#include<stdio.h>
int maze(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){ // do not go down 
        rightways+=maze(n,m-1);
    }
    if(m==1){ // do not go right
        downways+=maze(n-1,m);
    }
    if(n>1 && m>1){
        rightways+=maze(n,m-1);
        downways+=maze(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main()
{
    int n;
    printf("enter rows of maze : ");
    scanf("%d",&n);
    int m;
    printf("enter column of maze : ");
    scanf("%d",&m);
    int numberofways=maze(n,m);
    printf("%d",numberofways);
    return 0;
}