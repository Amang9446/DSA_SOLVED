#include<bits/stdc++.h>
using namespace std;
void min(int arr[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min;
}
int main()
{
    int arr[]={-1,-9,0,-11,-2};
    int size=5;
    min(arr,size);
}