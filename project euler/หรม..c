#include<stdio.h>
int main(){
char A[6] = {1,2,3,4,5,6};
int k=1,ans=1;
for(int n=2;n<=4;n++)
    {
        for(int i=0;i<=5;i++)
        {
            int B=A[i];
            if(A[i]%n == 0)
            {
                for(int j=i+1;j<=5;j++)
                {
                    if(B%n == 0 && A[j]%n ==0)
                    {
                        A[i]/=n;
                        A[j]/=n;
                        k*=n;
                        if(A[i]!=1)
                        {
                          ans*=k;
                        }
                    }
                }

            }
        }
    } printf("%d", ans);

}
