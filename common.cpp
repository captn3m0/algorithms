#include <assert.h>
#include <stdio.h>
void assertSorted(int* a,int length)
{
	//Check that the entire array is in sorted order
	for(int i=0;i<length-1;i++)
	{
		assert(a[i]<=a[i+1]);
	}
}
void display(int* a,int length)
{
	//Check that the entire array is in sorted order
	for(int i=0;i<length-1;i++)
	{
		printf("%d ",a[i]);
	}
}
