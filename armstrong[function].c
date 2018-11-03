#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/* global variable declaration */
int n, r, sum = 0,t;

//Without Argument And Return Values
void woArgs(){
    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
      r = n%10;
      sum=sum+(r*r*r);  
      n = n/10;
    }
    if (t == sum)
        printf("%d is a Armstrong number.", t);
    else
        printf("%d is not a Armstrong number.", t);
}
//With Argument But Without Return Values
void wArgs(int x){
    t = x;
    while (x > 0)
    {
      r = x%10;
      sum=sum+(r*r*r);  
      x = x/10;
    }
    if (t == sum)
        printf("%d is a Armstrong number.", x);
    else
        printf("%d is not a Armstrong number.", x);
}

//With Argument And Return Values
int wArgsRet(int x){
    t = x;
    while (x > 0)
    {
      r = x%10;
      sum=sum+(r*r*r);  
      x = x/10;
    }
    return sum;
}

//Without Argument And But With Return Values
int woArgsRet(){

    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
      r = n%10;
      sum=sum+(r*r*r);  
      n = n/10;
    }
    return sum;

} 
void main(){
    int opt;
        printf(":::MENU:::\n");
        printf("[1]Without Argument And Return Values\n");
        printf("[2]With Argument But Without Return Values\n");
        printf("[3]With Argument And Return Values\n");
        printf("[4]Without Argument And But With Return Values\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&opt);
        system("cls");
        switch(opt){
                case 1:
                    woArgs();
                    break;
                case 2:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    wArgs(n);
                    break;
                case 3:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    sum=wArgsRet(n);
                    if (t == sum)
                        printf("%d is a Armstrong number.", t);
                    else
                        printf("%d is not a Armstrong number.", t);           
                    break;
                case 4:
                    sum=woArgsRet();
                    if (t == sum)
                        printf("%d is a Armstrong number.", t);
                    else
                        printf("%d is not a Armstrong number.", t);   
                    break;
                default:
                    printf("Invalid Choice!!");
        }
    getch();


}