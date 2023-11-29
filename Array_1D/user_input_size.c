#include <stdio.h>
int main()
{
    int size;
    printf("enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i <= size - 1; i++)
    {
        printf("enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}