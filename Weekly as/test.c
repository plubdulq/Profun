#include<stdio.h>
int main(){
    int n,m,a,b,i,flag =0;
    char A[1000];
    scanf("%d", &n);
for(long int a=2;a<n;a++)
{
    if(n%a == 0){
            for(int j=2;j<a;j++)
            {
                if(a%j == 0)
                {
                    flag = 1;
                    break;
                }
                if(flag == 0)
                    {
                    printf("%d\n", a);
                    }

            }

 }
}
}
