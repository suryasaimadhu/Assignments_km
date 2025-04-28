//Write a program to print an integer in binary format using arrays
#include<stdio.h>
int main()
{
	int n,i=0;
	int bin[32];
	printf("enter the number \n");
	scanf("%d",&n);
	if(n==0)
		printf("the binary value is 0");
	while(n>0)
	{
		bin[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d\n",bin[j]);

	}
	return 0;
}
