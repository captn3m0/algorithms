#include <iostream>

void display(int* arr,int length)
{
  for(int i=0;i<length;i++)
    std::cout<<arr[i]<<"\t";
}
//Sort the array in Place
//Adapted from CLRS p18
void sort(int* arr, int length)
{
  for(int j=1;j<length;j++)
  {
    int key=arr[j];//current matching element we are inserting in place
    //The sorted array is from 0 to j-1
    int i=j-1;
    //Go in reverse direction from j-1 to left end of array
    //till you find something that is smaller then key
    while(i>=0 && arr[i]>key)
    {
      //this loop terminates at left most element
      //or an element smaller than key
      arr[i+1]=arr[i];//shift all elements by one to right
      i--;//go to the left
    }
    //i will reach minimum value of -1
    //so we put key in i+1th element
    arr[i+1]=key;
  }
}

int main()
{
  int list[5]={1,5,2,6,8};
  sort(list,5);
  display(list,5);
}
