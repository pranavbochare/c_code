#include<stdio.h>
int main()
{
    int marks[10]={90,95,31,25,100,50,65,89,97,30};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
}