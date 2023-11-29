#include <stdio.h>
int main()
{
    int x = 4;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int count = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] > 4)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}