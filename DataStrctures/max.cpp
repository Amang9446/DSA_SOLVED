#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 2, 10, 7, 8, 9, 6};
    int size = 9;
    int maxi = INT_MIN;
    cout<<maxi<<endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi << endl;
}