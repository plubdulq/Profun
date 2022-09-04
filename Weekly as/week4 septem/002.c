#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char A[100];
int cost, remain;
int hundred=0, fifty=0, twenty=0, ten=0, five=0, one=0;
char B[7] = {hundred, fifty, twenty, ten, five, one};
printf("Cost : ");
scanf("%d", &cost);
remain = 500-cost;
printf("remain = %d\n", remain);
for(int i=0;i<=5;i++)
    {
     scanf("%d", &A[i]);
    }
for(int i=0;i<=5;)
    {
    if(remain>0)
        {
            if(remain>=A[i])
                {
                    remain-=A[i];
                    B[i]+=1;
                }
            else if(remain<A[i])
                {
                    i++;
                }
        }
    else
        i++;
    }
for(int i=0;i<=5;i++)
    {
        printf("%d\n", B[i]);
    }

}

