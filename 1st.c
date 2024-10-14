#include <stdio.h>
int main(){
    int bp;
    int da;
    int hra;
    int graphy;

    printf("\nEnter basic salary of ramesh:");
    scanf("%f",&bp);
    da = 0.4*bp;
    hra = 0.2*bp;
    graphy = bp+da+hra;
    printf("basics salary of ramesh = %f\n", bp);
    printf("dearness allowence = %f\n",da);
    printf("house  rent allowence = %f\n",hra);
    printf("gross pay of ramesh is %f\n",graphy);
    return 0;


    

}