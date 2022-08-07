#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[0]<<" is the first position element in the array."<<endl;
    cout<<arr[n-1]<<" is the last position element in the array."<<endl;
}
