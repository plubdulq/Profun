#include<stdio.h>
int main()
{
int a,b,c;
int leastnum,num1,num2;
printf("Input : ");
scanf("%d %d %d", &a, &b, &c);
if(a<=b&&a<=c)
{
    leastnum = a;
    num1 = b;
    num2 = c;
}
else if(b<=a&&b<=c)
{
    leastnum = a;
    num1 = a;
    num2 = c;
}
else if(c<=b&&c<=a)
{
    leastnum = a;
    num1 = b;
    num2 = a;
}
printf("sum = %d", num1+num2);
 }
