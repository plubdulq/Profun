#include <stdio.h>
#include <string.h>
int factorial(int input)
{
    int fact =1;
    for(int i=1;i<=input;i++)
    {
         fact*=i;
    }
    return fact;
}
int main() {
    int num;
    printf("Input : ");
    scanf("%d", &num);
    printf("%d", factorial(num));
}
