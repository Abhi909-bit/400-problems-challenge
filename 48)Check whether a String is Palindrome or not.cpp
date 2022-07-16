//Problem Statement : Check whether a String is Palindrome or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int l=str.size(),cnt=0;
    cout<<" The input string is : "<<str<<endl;
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1])
           {
               cout<<"String is not a palindrome."<<endl; break;
           }
        else
            cnt++;
    }
    if(cnt>0)
        cout<<"String is a palindrome."<<endl;

    return 0;
}
