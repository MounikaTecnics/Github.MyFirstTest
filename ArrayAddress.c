//Program for printing a address of an array.
#include<stdio.h>
void main()
{
	int marks[5];
	printf("Adress of an array is: ");
	printf("%u\n", marks);
	printf("Starting address of an array is: ");
	printf("%u\n", &marks[0]);
}