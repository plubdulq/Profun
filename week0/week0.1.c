#include<stdio.h>

int main() {
    int a,b;
char A[10];
for(int i=0;i<2;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("%d %d %d %d", A[0]+A[1], A[0]-A[1], A[0]*A[1], A[0]/A[1]);
}

