// #include <stdio.h>
// int main()
// {
//     int arr[5] = {5, 7, 2, 4, 8};
//     int min = arr[0];
//     for (int i = 0; i <= 4; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     printf("%d", min);
//     return 0;
// }
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {5, 7, 2, 4, 8};
    int min = INT_MAX;
    for (int i = 0; i <= 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}