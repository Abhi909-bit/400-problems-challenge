//Count set bits in an integer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    //vec.push_back(1);
    while(n>1){
        vec.push_back(n%2);
        n=n/2;
    }
    vec.push_back(1);
    int cnt=0;
    for(auto i=vec.begin();i<vec.end();i++)
        if(*i==1)
            cnt++;

    cout<<cnt<<endl;

    return 0;
}
