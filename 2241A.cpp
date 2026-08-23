#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    int x,y;
    if(t>=1 && t<=100000){
        while(t--){
            cin>>x>>y;
            if(x>=1 && y>=1 && x<=100 && y<=100){

                if(x%y==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            }

        }
    }
    return 0;
}
