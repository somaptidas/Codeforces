#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,j;
    int num[3];
    for(i=0;i<t;i++){
        for(j=0;j<3;j++){
            scanf("%d",&num[j]);
            //t--;
        }
    }
     for(i=0;i<t;i++){
         for(j=0;j<3;j++){
            if(num[0]+ num[1]==num[2]){
                printf("Yes\n");
            }
            else if(num[0]+num[2]==num[1]){
                printf("Yes\n");
            }
            else if(num[1]+num[2]==num[0]){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
       // t--;

    }





    return 0;
}
