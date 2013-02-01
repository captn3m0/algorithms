#include <iostream>
#include "../common.h"

using namespace std;
int bsearch(int* haystack,int needle, int start, int end)
{
	int mid=start+(end-start)/2;
	if(start==end)
	{
		if(haystack[start]==needle)
			return start;
		return -1;
	}
	if(haystack[mid]>needle)
		return bsearch(haystack,needle,start,mid-1);
	else if(haystack[mid]<needle)
		return bsearch(haystack,needle,mid+1,end);
	else
		return mid;
}

int main()
{
	int arr[15]={1,5,6,8,12,14,16,19,21,56,102,225,300,400,500};
	assertSorted(arr,15);
	assert(bsearch(arr,5,0,14)==1);
	assert(bsearch(arr,500,0,14)==14);
	assert(bsearch(arr,20,0,14)==-1);
}
