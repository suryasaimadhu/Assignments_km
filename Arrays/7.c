/* Write a program to print an array in reverse order*/
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j;
	for(i=0,j=4;i<j;i++,j--)
	{
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<5;i++)
	{
		printf("element at index %d is %d\n",i,a[i]);
	}
}

