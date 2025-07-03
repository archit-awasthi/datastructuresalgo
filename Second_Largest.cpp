#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
     vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    int secondl;
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i] != largest)
        {
            secondl=arr[i];
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<secondl;
    return 0;
}