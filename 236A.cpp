#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int count=0;
    string str;
    cin>>str;
    int n=str.size();
    sort(str.begin(),str.end());
    if(n<=100){

        for(int i=0;i<n;i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    }

   if(count%2==0){
    cout<<"CHAT WITH HER!"<<endl;
   }
   else{
    cout<<"IGNORE HIM!"<<endl;
   }
    return 0;
}
