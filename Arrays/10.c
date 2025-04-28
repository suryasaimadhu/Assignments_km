/*Write a program to swap two arrays in reverse order.
  eg.,
input : array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};


output:

array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1} */

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements to be in arrays\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the elements into 1st array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements into 2nd array\n");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(int i;i<n;i++)
	{
		int temp[n];
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
	}
	for(int j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
}

