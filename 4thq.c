#include <stdio.h>
int main(){
    float cp,sp,p,l;
    printf("enter cost price and sewllingprice :");
    scanf("%f%f",&cp,&sp);
    p = sp-cp;
    l= cp-sp;
    if(p>0){
        printf("the seller made a profit of %f\n",p);
    }
    if(l>0){
        printf("the seller incuured loss of%f\n",l);
    }
    if(p==0){
        printf("there is no loss, no profit\n");
    }

}