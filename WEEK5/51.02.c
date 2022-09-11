#include <stdio.h>
#include <string.h>

int main() {
char input[100];
int a=0,b=0;
scanf("%[^\n]s", input);
for(int i=0;i<strlen(input);i++)
    {
        if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
               {
                   if(input[i]>='a' && input[i]<='z')
                    a+=1;
               }
        else
            b+=1;
    }
printf("\na-z = %d\n", a);
printf("A-Z = %d", strlen(input)-a-b);
}
