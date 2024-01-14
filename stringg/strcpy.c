#include<stdio.h>
#include<string.h>
int main()
{
    char s1[15]="pranav";
    char s2[15];
    strcpy(s2,s1);
    s2[0]='M';
    printf("%s\n",s2);   // deep copy
    printf("%s",s1);
    return 0;
}