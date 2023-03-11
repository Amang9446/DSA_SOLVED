#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 5, 4, 3, 9};
    int sizea = 5;
    int brr[] = {2, 6, 8, 7};
    int sizeb = 4;
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}