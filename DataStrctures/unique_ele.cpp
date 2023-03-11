#include <bits/stdc++.h>
using namespace std;
int unique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=arr[i]^ans;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];     
    }
    int unq=unique(arr);
    cout<<"the unique element is"<<unq<<endl;

}