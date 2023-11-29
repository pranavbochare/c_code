#include <stdio.h>
int main()
{
    int arr[7] = {1, 3, 9, 5, 6, 9, 4};
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is duplicate and its index is %d", arr[i], i);
                break;
            }
        }
    }
    return 0;
}