/* 2*2
WB
BB(w =1,B=2)
2*3
WBB
BBB(w=1,B=2)
3*2
WB
BB
BB(w=1,B=2)
*/


#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   int n,m;

   while(t--){
    scanf("%d%d",&n,&m);
    int row,col;
    for(row=1;row <=n;row++){
        for(col=1;col<=m;col++){
            if(row==1 && col==1)
                printf("W");

            else
                printf("B");


        }
        printf("\n");
    }

   }
   return 0;
}
