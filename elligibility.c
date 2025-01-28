#include <stdio.h>
int main(){
    int mark1 , mark2,mark3;
    printf("enter the mark1:");
    scanf("%d",&mark1);
    printf("enter the mark2:");
    scanf("%d",&mark2);
    printf("enter the mark3:");
    scanf("%d",&mark3);
    if(mark1>40){
        printf("he can go to the second round");
        if(mark2>50){
            printf("he can go to the third round");
            
        
        
        
        if(mark3>54
        ){
            printf("he is passed");
        }
        else{
            printf("he is failed");
            }
        }
        else{
            printf("you are not elliglible");

        }
    }
    else{
        printf("you are not accepted");
    }

}