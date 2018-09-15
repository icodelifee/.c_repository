//swapping using multiplication algo
#include<stdio.h>
#include<conio.h>
void main(){

    int x,y;
    printf("\n\n\nEnter Number To Be Swapped : \n\n\n");
    scanf("%d%d",&x,&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("Values After Swapping Are %d %d",x,y);
    getch();
}