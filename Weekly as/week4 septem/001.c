#include<stdio.h>
#include<stdlib.h>
int main()
{
int cost, remain;
int hundred=0,fifty=0,twenty=0,ten=0,five=0,one=0;
printf("Cost : ");
scanf("%d", &cost);
remain = 500 - cost;
printf("remain = %d\n", remain);
while(remain>=0)
    {
        if(remain>=100)
        {
            hundred = remain/100;
            remain = remain - (hundred*100);
        }
        else if(remain>=50)
        {
            fifty = remain/50;
            remain-=fifty*50;
        }
        else if(remain>=20)
        {
            twenty = remain/20;
            remain-= twenty*20;
        }
        else if(remain>=10)
        {
            ten = remain/10;
            remain-=ten*10;
        }
        else if(remain>=5)
        {
            five = remain/5;
            remain-=five*5;
        }
        else
        {
            one = remain/1;
            printf("100 baht = %d\n", hundred);
            printf(" 50 baht = %d\n", fifty);
            printf(" 20 baht = %d\n", twenty);
            printf(" 10 baht = %d\n", ten);
            printf("  5 baht = %d\n", five);
            printf("  1 baht = %d\n ", one);
            break;
        }
    }
}

