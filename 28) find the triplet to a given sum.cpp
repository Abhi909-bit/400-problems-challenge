#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int K;
    cin>>K;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,cnt=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                   // cout<<i<<" "<<j<<" "<<k<<"  sum : "<<(arr[i]+arr[j]+arr[k])<<endl;
                if((arr[i]+arr[j]+arr[k])==K){
                    cout<< "ans:" <<i<<" "<<j<<" "<<k<<endl;
                    cnt++;

                }
            }


        }


    }
    return 0;
}
6
12
2 5 9 3 4 1
