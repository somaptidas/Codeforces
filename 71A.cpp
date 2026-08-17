
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int test_case;
   cin>>test_case;
   if(test_case>=1 && test_case<=100){
         while(test_case--){
    string str;
    cin>>str;
    int length=str.length();
    if(length>=1 && length<=100){
        if(length>10){
        cout<<str[0]<<length-2<<str[length-1]<<endl;
    }
    else{
        cout<<str<<endl;
    }
    }

   }
   }

    return 0;
}
