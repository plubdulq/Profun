#include<stdio.h>
int main()
{
int num1,num2;
int a,b,c;
scanf("%d %d %d", &a, &b, &c);
if(a>=b&&a>=c)
    {
        num1 = a;
        if(b>=c)
            num2=b;
        else
            num2=c;
    }
else if(b>=c&&b>=a)
    {
        num1 = b;
        if(a>=c)
            num2=a;
        else
            num2=c;
    }
else if(c>=b&&c>=a)
    {
        num1 = c;
        if(b>=a)
            num2=b;
        else
            num2=a;
    }
    printf("%d %d", num1,num2);
 }
