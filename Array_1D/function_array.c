#include <stdio.h>
void fun(int x[])
{
    x[0] = 10;
    return;
}
int main()
{
    int arr[5] = {2, 3, 4, 2, 6};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d\n", arr[0]);
    return 0;
}