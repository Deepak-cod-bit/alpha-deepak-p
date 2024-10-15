#include <stdio.h>
#include <math.h> /*for sqrt()*/

int main(){
    float a, b ,c, sp, area;
    printf("\n enter your sides of triangle;");
    scanf("%f %f %f",&a,&b,&c);
    sp = (a+b+c)/2.0;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("area of triangle = %f\n",area);
    return 0;
}
