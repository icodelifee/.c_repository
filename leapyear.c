#include<stdio.h>
#include<curses.h>
void main()
{
    int year;
    printf("Enter A Year : ");
    scanf("%d",&year);
    if(year%4==0)
        printf("%d Is A Leap Year",year);
    else
        printf("%d Is Not A Leap Year",year);
    getch();
}
