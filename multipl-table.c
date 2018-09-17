#include<stdio.h>
#include<curses.h>
void main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){

        printf("%d * %d = %d\n",n,i,i*n);
    }
getch();
}