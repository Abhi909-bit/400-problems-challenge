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
     int mini=9999999,min_ind;
     sort(arr,arr+n);
     for(int i=0;i<=n-m;i++){
        int temp= arr[i+m-1]-arr[i];
        if(temp<mini){
            mini=temp;
            min_ind=i;
        }

     }
     cout<<mini<<endl;
     for(int i=min_ind;i<(min_ind+m);i++)
        cout<<arr[i]<<" ";




 }
 /*
8
5
3 4 1 9 56 7 9 12

*/
