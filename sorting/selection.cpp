#include <iostream>
#include "../common.h"
#include <limits.h>

void selectionSort(int* arr,int length)
{
	int smallest;
	for(int i=0;i<length;i++)
	{
		smallest=INT_MAX;
		int smallestPointer=-1;
		for(int j=i;j<length;j++)
		{
			if(arr[j]<smallest)
			{
				smallest=arr[j];
				smallestPointer=j;
			}
		}		
		//Now small* holds the value
		//We exchange it with the ith element
		arr[smallestPointer]=arr[i];
		arr[i]=smallest;
	}
}

int main()
{
	int list[15]={1,5,2,6,8,100,6,3,1,32,54,32,2,5,10};
	selectionSort(list,15);
	assertSorted(list,15);
}
