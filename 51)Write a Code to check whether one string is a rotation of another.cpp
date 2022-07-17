//Problem Statement : Write a Code to check whether one string is a rotation of another
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int l1=str1.size();
    int l2=str2.size();
   // cout<<"l1 = "<<l1<<endl;
    int i,j;
    if(l1!=l2)
        cout<<"The strings are not in rotation."<<endl;
    else{
        for(i=0;i<l2;i++){
            if(str2[0]==str1[i])
                break;
        }
        for(j=0;j<l2;j++){
             //  cout<<"i = "<<i<<endl;
             //   cout<<"j = "<<j<<endl;
            if(str2[j]!=str1[i]){
               cout<<"The strings are not in rotation."<<endl;
               break;
            }
            i++;
            if(i>=l1)
                i=i%l1;

            if(j==l1-1){
                cout<<"The strings are in rotation."<<endl;
                break;
            }
        }
    }
    return 0;

}
