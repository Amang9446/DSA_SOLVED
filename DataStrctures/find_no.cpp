#include <bits/stdc++.h>
using namespace std;
void occur(int arr[], int size, int one, int zero)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }
    cout<<one<<endl;
    cout<<zero<<endl;
}
int main()
{
    int zero = 0;
    int one = 0;
    int arr[] = {1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1};
    int size = 18;
    occur(arr,size,one,zero);
}