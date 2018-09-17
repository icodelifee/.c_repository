#include<stdio.h>
#include<curses.h>
void main(){

    int n,sum=0;
    printf("Enter The Value For N : ");
    scanf("%d",&n);

    for(int i=1;i<n;i++){

            sum+=i;
            
    }
    printf("Sum : %d\n",sum);
getch();
}