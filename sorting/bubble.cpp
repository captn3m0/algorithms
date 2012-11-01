#include "../common.h"

void bubble(int* a,int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=length;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}

int main()
{
    int arr[10]={103,80,45,23,54,123,65,32,65,1};
    bubble(arr,10);
    assertSorted(arr,10);
}
