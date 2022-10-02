#include<stdio.h>

int main(){
FILE *data;
data = fopen("C:/Users/POOM/Desktop/LABS/Weekly assignments/WEEK7/data.txt", "w");
printf("Input data string : \n");
if(data == NULL)
    printf("Error");
char A[100];
scanf("%[^.]s", A);
fputs(A, data);
fprintf(data,".");
fclose(data);
return 0;
}
