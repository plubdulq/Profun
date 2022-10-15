#include <stdio.h>

int main()
{
    int m,n,j,end = 0;
    int input1[100][100], input2[100][100];
    printf("Input : ");
    scanf("%d %d", &m, &n);
    if(m>=1 && n>=1)
    {
        for(int i=0; i<m; i++)
        {
            if(end == 0)
                for(j=0; j<n; j++)
                {
                    scanf("%d", &input1[i][j]);
                    if(j>=n-1 && i>=m-1)
                    {
                        end=1;
                        i=0;
                    }
                }
            if(end == 1)
            {
                for(int k=0; k<n; k++)
                {
                    scanf("%d", &input2[i][k]);
                }
            }
        }
        printf("Output :\n");
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", input1[i][j]+input2[i][j]);
                if(j==n-1)
                    printf("\n");
            }
        }
    }
    else
        printf("Error jaaa");

}
