#include<bits/stdc++.h>
using namespace std;
void linear_s(int arr[],int size,int key)
{
    bool flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
        flag=1;
        }
    }
        if(flag){
            cout<<"present";
        }
        else
        cout<<"not found";
    }

int main(){

    int arr[]={5,6,5,7,8,9,5,2,1,4,6,9,7,3,2};
    int size=15;
    int key=22;
    linear_s(arr,size,key);
}