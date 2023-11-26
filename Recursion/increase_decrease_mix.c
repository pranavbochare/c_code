#include<stdio.h>
void decrease(int n){
    if(n==0) return;    //base case
    printf("%d ",n);    //code
    decrease(n-1);      //recursive case
    return;
}
void increase(int n){
    if(n==0) return;
    increase(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int a;
    printf("emter a number : ");
    scanf("%d",&a);
    decrease(a);
    increase(a);
    return 0;
}