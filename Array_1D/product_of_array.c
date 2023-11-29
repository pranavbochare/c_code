#include <stdio.h>
int main()
{
    int product = 1;
    int arr[5] = {1, 3, 5, 7, 10};
    for (int i = 0; i <= 4; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}