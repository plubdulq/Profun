#include<stdio.h>
int main(){
char A[6] = {1,2,3,4,5,6};
int k=1,a;
int ans=1;
for(int i=0;i<=5;i++)
    {
        if(A[i]%2 == 0)
        {
            A[i]/=2;
        }
    }
for(int i=0;i<=5;i++)
    {
        if(A[i]%3 == 0)
        {
            A[i]/=3;
        }
    }
for(int i=0;i<=5;i++)
    {
        k=k*A[i];
    }
printf("%d", k*2*3);
}
