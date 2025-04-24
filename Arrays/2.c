/*2 Write the following program :
  Declare a character array without size.
  Initialize the array with characters of your name.
  Print your name using for loop.*/
#include<stdio.h>
int main()
{
	int a[]={'m','a','d','h','u'};
	int size=(sizeof(a)/sizeof(int));
	printf("size of s is %d\n",size);
	for(int i=0;i<size;i++)
	{
		printf("%c",a[i]);
	}
        return 0;
}

