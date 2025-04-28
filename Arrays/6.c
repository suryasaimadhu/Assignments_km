/*6 Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.*/

#include<stdio.h>

int search(int a[],int n,int s);
int main()
{
	int n,s;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements into the array\n");
	for(int i=0;i<n;i++)
	{
		printf("element at %d index \n",i);
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&s);
	int x=search(a,n,s);
	printf("the element %d is foud at index %d",s,x);
	return 0;
}
int search(int a[],int n,int s)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			return i;
		}
		else
			return -1;
	}
}
