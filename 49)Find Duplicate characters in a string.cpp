//Problem Statement : Find Duplicate characters in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    int up[25]={0},low[25]={0};

    for(int i=0;i<str.size();i++){
        if(int(str[i])>=65 && int(str[i])<=90)
            up[int(str[i])-65]++;
        else if(int(str[i])>=97 && int(str[i])<=122)
            low[int(str[i])-97]++;
    }
    for(int i=0;i<=25;i++){
        if(up[i]>1)
        cout<<char(65+i)<<" ";
    }
    for(int i=0;i<=25;i++){
        if(low[i]>1)
        cout<<char(97+i)<<" ";
    }
    return 0;
}

