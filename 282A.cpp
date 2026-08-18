
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    while (n--){

        string str;
        cin>>str;
        if(str=="++x" || str=="x++" || str=="++X" || str=="X++"){
            x++;
        }
        if(str=="--x" || str=="x--" || str=="X--" || str=="--X"){
            x--;
        }
    }
    cout<<x;
    return 0;
}
