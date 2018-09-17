#include<stdio.h>
#include<curses.h>
void main()
{
    char x;
    printf("Enter The Character : ");
    scanf("%c",&x);
    if((x>='a' && x<='z')||(x>='A' && x<='Z'))
        printf("%c Is A Alphabet\n",x);
    else    
        printf("%c Is Not A Alphabet\n",x);
    getch();
}
