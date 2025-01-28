#include <stdio.h>
int main(){
    int i,a;
    printf("enter value of a:");
    scanf("%d",&a);
    for(i=1;i<a;i++){
        printf("%d",(i*i*i));
    }

}