#include<stdio.h>
#include<curses.h>
void main(){

    int n;
    long fact = 1;
    printf("Enter The Value For N : ");
    scanf("%d",&n);
    if(n<0)
        printf("Enter +ve Number\n");
    else{
        for(int i=1;i<=n;++i){
        
            fact *=i ;

        }}
    printf("Factorial : %ld \n",fact);
getch();    
}