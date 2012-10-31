#include <math.h>
#include <iostream>
#include "../common.h"
#include <limits.h>
#define MAX_LENGTH 12

using namespace std;
void merge(int* a,int start,int pivot,int end)
{
  //create left and right arrays
  int left[MAX_LENGTH], right[MAX_LENGTH],i,lp=0,rp=0;
  //Copy the left and right halves of a in left/right
  for(i=0;i<pivot;i++)
    left[i]=a[start+i];
  for(i=pivot;i<end;i++)
    right[i-pivot]=a[i];
  right[end-pivot]=left[pivot]=INT_MAX;//add sentinel values
  //now we have copied the arrays
  //There are a total of end-start elements in the complete array
  for(i=start;i<end;i++)
  {
    if(left[lp]<=right[rp])
    {
      a[i]=left[lp];
      lp++;
    }
    else
    {
      a[i]=right[rp];
      rp++;
    }
  }
}
void mergeSort(int* a,int start,int end)
{
  //For single element arrays, we just return it
  //as it is already sorted
  if(end-start==1)
    return;
  int pivot=floor((start+end)/2);//calculate the pivot
  //call merge sort on both halves
  mergeSort(a,start,pivot);//pivot is not included
  mergeSort(a,pivot,end);//pivot included
  //end refers to the array size
  //array index goes from 0 to end-1
  //Now we merge both halves
  merge(a,start,pivot,end);
}
int main()
{
  int arr[MAX_LENGTH]={12,11,10,9,8,7,6,5,4,3,2,1};
  mergeSort(arr,0,12);
  assertSorted(arr,4);
}
