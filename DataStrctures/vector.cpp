#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>arr(10);
    // cout<<arr.size()<<endl;
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" "<<endl;
    // }
    // cout<<arr.size()<<endl;
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    vector<int> arr(n);
    arr.push_back(10);
    arr.push_back(50);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
}
