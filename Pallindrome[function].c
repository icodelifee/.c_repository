#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/* global variable declaration */
int n, rev = 0,t;

//Without Argument And Return Values
void woArgs(){
    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
      rev = rev * 10;
      rev = rev + t%10;
      t = t/10;
    }
    if (n == rev)
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
}

//With Argument But Without Return Values
void wArgs(int x){
    t = x;
    while (t != 0)
    {
      rev = rev * 10;
      rev = rev + t%10;
      t = t/10;
    }
    if (x == rev)
        printf("%d is a palindrome.", x);
    else
        printf("%d is not a palindrome.", x);
}

//With Argument And Return Values
int wArgsRet(int x){
    t = x;
    while (t != 0)
    {
      rev = rev * 10;
      rev = rev + t%10;
      t = t/10;
    }
    return rev;
}

//Without Argument And But With Return Values
int woArgsRet(){

    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
      rev = rev * 10;
      rev = rev + t%10;
      t = t/10;
    }
    return rev;

} 
char loop(){
    //to check if you want to restart or not
    char sel;
    printf("\n\nDo You Want To Continue?[y/n]");
    scanf("%s",&sel);
    if(sel == 'y'){
        system("cls");
        return sel;
        }
    else 
        exit(1);


}
void main(){
    int opt;
    char sel;
    do{
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
                    rev=wArgsRet(n);
                    if (n == rev)
                        printf("%d is a palindrome.", n);
                    else{
                        printf("%d is not a palindrome.", n);}           
                    break;
                case 4:
                    rev=woArgsRet();
                    if (n == rev)
                        printf("%d is a palindrome.", n);
                    else
                        printf("%d is not a palindrome.", n);   
                    break;
                default:
                    printf("Invalid Choice!!");
                    break;
            }
        sel = loop();
    }while(sel == 'y');
    getch();


}