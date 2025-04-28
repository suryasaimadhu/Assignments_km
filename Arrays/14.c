/*write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};

output : biggest number is repeated 4 times */

#include<stdio.h>
int big(int a[]);
int main()
{
    int a[10];
    printf("enter the elements into the array \n");
    for(int i=0;i<10;i++)
           scanf("%d",&a[i]);
    int x=big(a);
    printf("The number is repeated for %d times\n",x);
}
 int big(int a[])
 {
    int l=a[0],c=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]>l)
        l=a[i];
    }
    printf("large number is %d\n",l);
    for(int i=0;i<10;i++)
    {
        if(a[i]==l)
        c++;
    }
    return c;
 }