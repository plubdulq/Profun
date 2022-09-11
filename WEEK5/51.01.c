#include <stdio.h>
#include <string.h>
//นายภาสกร พลแสน 65010833
int main() {
char input[100];
int a=0,b=0;
scanf("%[^\n]s", input);
for(int i=0;i<strlen(input);i++)
    {
        if(input[i]>='a' && input[i]<='z')
            a+=1;
        else if(input[i]>='A' && input[i]<='Z')
            b+=1;
    }
printf("a-z = %d\n", a);
printf("A-Z = %d", b);
}
