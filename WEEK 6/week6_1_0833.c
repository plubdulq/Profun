#include<stdio.h>
int select(int n){
    int pippu;
    pippu = n*(n-1)/2;
    return (pippu) ;

}
int main() {
    int n;
    printf("INPUT : ");
    scanf("%d", &n); //เฉพาะตัวเลข
    if(n<0)
        printf("Error");
    else if(select(n)>=0)
        printf("Answer is %d", select(n));
}

