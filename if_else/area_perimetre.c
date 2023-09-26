#include<stdio.h>
int main()
{
    int l;
    printf("enter length of rectangle : ");
    scanf("%d",&l);
    int w;
    printf("enter width of rectangle : ");
    scanf("%d",&w);
    int area=l*w;
    int perimetre=2*(l+w);
    if(area>perimetre){
        printf("area is greater than width");
    }
    else{
        printf("perimetre is greater than area");
    }
    return 0;      
}