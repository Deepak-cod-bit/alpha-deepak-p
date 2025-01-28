#include<stdio.h>
int main(){
    char ch;
    printf("enter the character from keyboard:");
    scanf("%c",&ch);
    if (ch >= 65 && ch <= 90){
        printf("the character is an upper case letter");
    }
    else if(ch >= 97 && ch <= 122){
        printf("the character is a lower case letterr");
    }
    else if(ch >= 48 && ch <= 57){
        printf("the character is a digit");

    }
    else if ((ch >= 0 && ch< 48)||(ch >57 && ch <65)||(ch >90 && ch<97)||ch>122){
        printf("the character is a special symbol");
    }
    }