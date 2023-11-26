#include<stdio.h>
void decrease(int n){
    if(n==0) return;
    decrease(n-1);    //decreasing mai sirf ek change kiya hai
    printf("%d ",n);  //call ko pehle likha code se
    return;
}
int main()
{
    int a;
    printf("enter number : ");
    scanf("%d",&a);
    decrease(a);
    return 0;
}