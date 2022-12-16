#include <stdio.h>
#include <math.h>
float calculateCR(float bh, float dh);

int main(){
    float bounceH;

    printf("Enter the bounce height: ");
    scanf("%f", &bounceH);
    printf("Enter the drop height: ");
    scanf("%f", &dropH);

    float cr = calculateCR(bounceH, dropH);
    
    if(cr == -1){
        printf("error");
    }
    else{
        printf("Coefficient of restitution: %.3f\n", cr);
    }

    return 0;
}

float calculateCR(float bh, float dh){
    float result;
    result = sqrt(bh/dh);
    if(result <= 0 || bh > dh){
        return -1.0;
    }
    else
    {
        return result;
    }
}