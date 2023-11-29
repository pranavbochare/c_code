// #include <stdio.h>
// int main()
// {
//     int arr[5] = {15, 10, 17, 1, 9};
//     int max = arr[0];
//     for (int i = 0; i <= 4; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {1,2,3,45,6};
    int max = INT_MIN;
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}