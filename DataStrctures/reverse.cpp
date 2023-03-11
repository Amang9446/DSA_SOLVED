#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
       start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}