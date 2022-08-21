#include<stdio.h>
int main(){
int n,a;
int i=2;
a = 100;
do
{
    if(a%i!=0)
    {
        a++;
        i=2;
    }
    else if(a%i==0)
    {
        if(i==20)
        {
            printf("%d", a);
            break;
        }
        else if(i!=20)
        {
            i++;

        }
    }

}while(i<=20);
}
