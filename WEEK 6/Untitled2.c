#include<stdio.h>

int main() {
    int n,path=0;
    int *p;
    printf("INPUT : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
         if(i != j)
           {
                 if(i>j)        // นับทุกครั้ง แต่ลบออกด้วยครั้งที่ i>j เช่น 1->2 ได้บวก 1 แต่ 2-> 1 ได้บวก 1 เช่นกัน แต่ลบออก 1 เพราะ i>j
                    path-=1;
                 path+=1;
           }
        }
    }
printf("path : %d", path);


}

