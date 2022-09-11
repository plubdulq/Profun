#include <stdio.h>
#include <string.h>

int main()
{
    char ch = 'a';
    char CH = 'A';
    char text[]="hello word sirilak";
    int i,len;
    len = strlen(text);
    printf("\n\n%s",text);
    char *ptr;
    int difference = ch-CH;
    for(i=0;i<len;i++)
    {
          if ((text == 104 ) || (text ==119) || (text == 115)) // 104 =a  119 = w  115=s
                 text = text-difference;

    }
    printf("\n%s",text);
}
