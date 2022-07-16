// Problem Statement : Reverse a String

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int l=str.size();
    cout<<endl<<"String before reversed : "<<str<<endl;

    for(int i=0;i<(l/2);i++){
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }

    cout<<"String after reversed : "<<str<<endl;

    return 0;
}
