#include<stdio.h>

int main() {
    FILE *fp, *sum;
    int num1,num2,valueB;
    fp = fopen("C:/Users/POOM/Desktop/LABS/Weekly assignments/WEEK7/a.txt","r");
    sum = fopen("C:/Users/POOM/Desktop/LABS/Weekly assignments/WEEK7/b.txt","w");
    //clrscr();
    fscanf(fp,"%d %d", &num1, &num2);
    fclose(fp);

    printf("Input : %d ", num1);
    printf("%d\n", num2);
    fprintf(sum,"%d", num1+num2);
    fclose(sum);

    sum = fopen("C:/Users/POOM/Desktop/LABS/Weekly assignments/WEEK7/b.txt","r");
    fscanf(sum,"%d", &valueB);
    printf("Output : %d", valueB);
    fclose(sum);

}

