#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char str[100];
    printf("Enter The Message To Be Encrypted : ");
    gets(str);

    for(i=0;i < strlen(str);i++){

        switch(str[i]){
            case 'x':
                str[i]='a';
                continue;
            case 'y':
                str[i]='b';
                continue;
            case 'z':
                str[i]='c';
                continue;
        }
        if((str[i] >= 'a')&&(str[i] <= 'z')){
            
            str[i]=str[i]+3;

        }}
    printf("Message After Encryption : ");
    puts(str);
    getch();
}
