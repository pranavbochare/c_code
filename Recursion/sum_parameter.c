// #include<stdio.h>
// void sum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return;
// }
// int main()
// {
//     int a;
//     printf("enter a number : ");
//     scanf("%d",&a);
//     sum(a);
//     return 0;
// }

// #include<stdio.h>
// void sum(int n, int s)
// {
//     if (n == 0)
//     {
//         printf("%d ", s);
//         return;
//     }
//     sum(n - 1, s+n);
//     return;
// }
// int main()
// {
//     int a;
//     printf("enter a number : ");
//     scanf("%d", &a);
//     sum(a, 0);
//     return 0;
// }

#include <stdio.h>
int sum(int n)
{
    if (n == 1 || n == 0)
        return n;
    return n + sum(n - 1);
}
int main()
{
    int a;
    printf("enter number : ");
    scanf("%d", &a);
    int add = sum(a);
    printf("%d", add);
    return 0;
}