#include <stdio.h>

void sum(int x,int y)
{
    return x+y;
}

int main()
{
int m,n;
int matrix1[100][100], matrix2[100][100];
int check = 0;
scanf("%d %d", &m, &n);
int (*ptr1)[m][n] = matrix1, (*ptr2)[m][n] = matrix2;
printf("Input 1 :\n");
if(m>=1 && n>=1)
{
    for(int i=0;i<m;i++)
    {
        if(check == 0)
        {
          for(int j=0;j<n;j++)
            {
                scanf("%d", &matrix1[i][j]);
                *ptr1[i][j] = matrix1[i][j];
                if(i==m-1 && j ==n-1)
                {

                    i=0;
                    check = 1;
                    printf("Input 2:\n");
                }
            }

        }
        if(check == 1)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d", &matrix2[i][j]);
                *ptr2[i][j] = matrix2[i][j];
            }
        }


    }
printf("Output :\n");
for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", *ptr1[i][j]+ *ptr2[i][j]);
                if(j==n-1)
                    printf("\n");
            }
        }
}
/*
1 2 3
3 2 1
1 3 2
1 1 1
1 1 1
1 1 1
*/
}
