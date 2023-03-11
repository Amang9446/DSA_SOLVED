#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={10,20,30,40,60,70,80,90};
    vector<int>brr={10,40,90,80,50,60};
    vector<int>crr;
    cout<<"intersection between arrays"<<endl;;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            if (arr[i]==brr[j])
            crr.push_back(brr[j]);
        }
    }
    for(int k=0;k<crr.size();k++)
    {
        cout<<crr[k]<<" ";
    }

}