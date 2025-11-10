#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
    }
    for(i=1;i<=t;i++){
        if(a==b && b==c && c==d){
            printf("YES\n");
        }
        else{
        printf("NO\n");
    }
   // break;

    }


    return 0;
}
