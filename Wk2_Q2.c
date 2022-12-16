#include <stdio.h>  
void rectangularPrism(float a, float b, float c, float *ar, float *vo);

int main(){
    float length;
    float width;
    float height;
    float area, volume;

    printf("Enter your first dimension (length): ");
    scanf("%f", &length);
    printf("Enter your second dimension (width): ");
    scanf("%f", &width);
    printf("Enter your third dimension (height): ");
    scanf("%f", &height);

    rectangularPrism(length, width, height, &area, &volume);
    printf("area: %f\nVolume: %f\n", area, volume);

    return 0;
}

void rectangularPrism(float a, float b, float c, float *ar, float *vo){
    *ar = 2*(a*b + a*c + b*c);
    *vo = a*b*c;
}