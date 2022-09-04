#include<stdio.h>
#include<string.h>

void main()

{

	char first[100], last[100];

	int i;



	printf("nEnter your first name:");

	scanf("%s", first );

	printf("nEnter your last name:");

	scanf("%s", last );

	printf("nYour full name is: %s %sn", first, last );

	printf("First name is: ");

	for( i=0; (i<100 && first[i] != '{PBODY}') ; i++ ){

	   printf("%c ",first[i]);

	}

	printf("nLast name is: ");

	for( i=0; (i<100 && last[i] != '{PBODY}') ; i++ ){

	   printf("%c ",last[i]);

	}

	printf("n");

}
