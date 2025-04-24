/*3 Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.*/
#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		printf("enter the element into array in the index\n",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
		printf("the element in the index %d is %d\n",i,a[i]);
	//biggest number and smallest //
	int min=a[0];
	int max=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf("max is %d\n",max);
		printf("min is %d\n",min);
}
