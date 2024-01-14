#include<stdio.h>
int main()
{
    char str[40];
    //scanf("%s",str);    only first word considered
    scanf("%[^\n]s",str);
    gets(str);
    printf("%s",str);
    return 0;
}