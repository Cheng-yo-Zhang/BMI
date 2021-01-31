#include <stdio.h>
#include <math.h>

int main(){
    float height,weight,BMI;
    printf("Enter your height：");
    scanf("%f", &height);
    printf("Enter your weight：");
    scanf("%f", &weight);
    height = height/100;
    BMI = weight / pow(height,2);
    printf("Your BMI=%.1f", BMI);
    return 0;
}