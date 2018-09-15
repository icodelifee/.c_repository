//swapping of two numbers using temp variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("\n\nEnter Two Numbers : \n\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Number After Swapping Are : %d %d",a,b);
    getch();
}
