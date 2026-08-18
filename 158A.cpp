#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,k;
    int count=0;
    cin>>n>>k;
    vector<int>vct(n);

        if(k>=1 && n>=k && n<=50){
            for(int i=0;i<n;i++){
        cin>>vct[i];

    }
    for(int i=0;i<n;i++){
        if(vct[i]>=vct[k-1] && vct[i]>0){
            count++;
        }
    }
        }



    cout<<count;
    return 0;
}
