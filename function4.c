#include <stdio.h>
void car();
int main (){
    int a =30;
    car(a);
    printf("%d",a);
    return 0;
}
void car (int b){
    b = 60;
    printf("%d",b);
}