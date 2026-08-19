#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int m,n;
    cin>>m>>n;
    int result;
    if(m>=1 && n>=m && n<=16){
        float multiply=m*n;
         result =multiply/2;

    }
    cout<<result;

    return 0;
}
