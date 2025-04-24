/*
   1 Write the following program :
   Declare an integer array of size 100.
   Assign numbers 1-100 to each element of the array.
   Print all the numbers.
   Print all even elements.
   Print all odd elements.
   Add 5 to each element and print 6 – 105 numbers.*/

#include<stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++)
	{
		a[i]=i+1;
		printf("The %d index of the array contains %d\n",i,a[i]);
	}
	printf("PRINT ALL EVEN NUMBERS 1-100\n");

	for(int i=0;i<100;i++)
	{
		if(a[i]%2==0)
			printf(" the %d index of the array containing %d is an even number\n",i,a[i]);
	}
	printf("PRINT ALL ODD NUMBERS 1-100");
	for(int i=0;i<100;i++)
	{
		if(a[i]%2!=0)
			printf(" the %d index of the array containing %d is an odd  number\n",i,a[i]);
	}
	printf("adding 5 to all the numbers\n");
	for(int i=0;i<100;i++)
	{
		a[i]+=5;
			printf(" the %d index of the array is %d \n",i,a[i]);
	}
	return 0;
	

}
