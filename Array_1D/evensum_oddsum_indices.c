#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int evensum = 0;
    int oddsum = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            evensum = evensum + arr[i];
        }
        else
        {
            oddsum = oddsum + arr[i];
        }
    }
    int res = evensum - oddsum;
    printf("%d", res);
    return 0;
}