#include <stdio.h>
void reverce(int arr[])
{
    for (int i = 0, j = 6; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverce(arr);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}