#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a,b,n;
scanf("%d", &n);
for(a=1;a<=n;a++)
{
    for(b=1;b<=a;)
    {
        printf(" * ");
        b+=1;
    }
    printf("\n");

}

}

