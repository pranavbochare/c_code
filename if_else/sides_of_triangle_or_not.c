#include<stdio.h>
int main()
{
    int a;
    printf("enter a first side of triangle : ");
    scanf("%d",&a);
     int b;
    printf("enter a second side of triangle : ");
    scanf("%d",&b);
     int c;
    printf("enter a third side of triangle : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("valid triangle");
    }
    else{
        printf("invalide triangle");
    }
    return 0;
}