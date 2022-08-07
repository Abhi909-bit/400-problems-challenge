#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int subarr[m];
    for(int i=0;i<m;i++){
        cin>>subarr[i];
    }
    map<int, int> map1;
    for(int i=0;i<n;i++){
        map1[arr[i]]=i;
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        if(map1[subarr[i]]!=0)
            cnt++;
    }
    if(cnt==m)
        cout<<"array is a subset."<<endl;
    else
        cout<<" not a subset."<<endl;

}
