// Problem Statement := Find the maximum and minimum element in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        vec.push_back(temp);                                            // first method sorting the array
    }
     sort(vec.begin(),vec.end());
     cout<<*(vec.begin())<<" is the minimum element."<<endl;
     cout<<*(vec.end()-1)<<" is the maximum element."<<endl;

     cout<<*min_element(vec.begin(),vec.end())<<" is the minimum element."<<endl;
     cout<<*max_element(vec.begin(),vec.end())<<" is the maximun element."<<endl;           // second method using min_element and max_element fron STL




     return 0;
}
