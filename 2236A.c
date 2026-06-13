#include<stdio.h>
int main()
{
    int i,j;
    int t,n;
    scanf("%d",&t);

    if(t>=1 && t<=100000){
    while(t--){

            scanf("%d",&n);
            if(n>=1 && n<=5){
            int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=1;i<n;i++){
            int current_element=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>current_element){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current_element;
        }
       int max_height=arr[n-1]+1;
       int min_value_of_k=max_height-arr[0];

       printf("%d\n",min_value_of_k);

    }
    }
    }
        return 0;
}
