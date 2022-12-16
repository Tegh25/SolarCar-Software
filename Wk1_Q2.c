#include <stdio.h>

int main(){
    float num1;
    float num2;

    printf("Enter your first float: ");
    scanf("%f", &num1);
    printf("Enter your second float: ");
    scanf("%f", &num2);

    printf("a = %f\n", num1);
    printf("b = %f\n", num2);

    float c;
    c = num1+num2;
    printf("a+b = %f\n",c);
    c = num1-num2;
    printf("a-b = %f\n",c);
    c = num1*num2;
    printf("a*b = %f\n",c);
    c = num1/num2;
    printf("a/b = %f\n",c);

    return 0;
}   