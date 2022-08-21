#include<stdio.h>
#include<stdlib.h>
int main()
{
float height,weight,BMI;
printf("Input your weight and height : ");
scanf("%f %f", &weight, &height);
 BMI = weight/(height*height);
 if(BMI<18.5)
    printf("Your BMI is lower than std\n ");
 else if(18.5<=BMI&&BMI<=24.9)
    printf("Your BMI is normal\n");
 else if(25.<=BMI&&BMI<=29.9)
    printf("Your BMI is higher than std\n");
 else if (BMI>=30.0)
    printf("Your BMI is too fat\n");
printf("%f ", BMI);
}

