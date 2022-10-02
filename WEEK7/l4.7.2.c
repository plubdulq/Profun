#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *data;
int i=0;int k=1;
data = fopen("C:/Users/POOM/Desktop/LABS/Weekly assignments/WEEK7/data.txt", "w");
printf("Input data string : \n");
if(data == NULL)
    printf("Error!!!");
char A[10000];
while(i==0)
{
if(i==0)
    {   scanf("%s", A);
        for(int j=0;j<strlen(A);j++)
        {

            fprintf(data, "%c", A[j]);
            if(A[j] == '.')
               {
                   i++;
                   j=1000;
              }

              if(j==strlen(A)-1)
                {
                    fprintf(data, "\n");
                }
        }
    }

}
fclose(data);
return 0;
}
