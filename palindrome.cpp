#include <bits/stdc++.h>
using namespace std:
int main(){
    string k;
    cin>>k;
    int n=k.size(),i,flag=1;
    for(i=0;i<n;i++){
       if(k[i]!=k[n-1-i]){
        cout<<"Not a palindrome"<<endl;
        flag=0;
        break;
       }
    }
    if(flag==1)
    cout<<"Given string is a palindrome"<<endl;
}