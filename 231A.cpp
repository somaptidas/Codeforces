#include<bits/stdc++.h>
using namespace std;
int main(){

    int test_case;
   // cin>>test_case;
   scanf("%d",&test_case);
    int flag=0;
    if(test_case>=1 && test_case<=1000){

         while(test_case--){
        //vector<int>vct[3];
        int arr[3];
        int add=0;
        int i;
        for( i=0;i<3;i++){

            scanf("%d",&arr[i]);
            add=add+arr[i];
        }

        if(add>=2){
            flag=flag+1;
        }
    }
    }


   // cout<<flag;
   printf("%d",flag);

}
