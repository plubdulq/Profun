#include <stdio.h>
#include <string.h>

int main() {
    int input,fact=1;
    printf("Input : ");
    scanf("%d", &input);
    for(int i=1;i<=input;i++)
    {
         fact*=i;
    }
    printf("%d", fact);
}
