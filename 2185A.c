#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[20];
    int i,j;
    if(t>=1 && t<=20){
        for(i=0;i<t;i++){
            scanf("%d",&arr[i]);
        }
    for(i=0;i<t;i++){
        if(arr[i]>=1 && arr[i]<=20){
            for(j=1;j<=arr[i];j++){
                printf("%d\n",j);
            }
        }
    }
    }
  return 0;
}
