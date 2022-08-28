#include<stdio.h>
int main()
{
int a=1,b=6;
while(b>=1)
    {
        if(a%b == 0)
        {
            if(b ==1 &&a%b ==0)
            {
                printf("%d", a);
            }
            b--;
        }
        else
          {
            a++;
            b=6;
          }
    }

 }
