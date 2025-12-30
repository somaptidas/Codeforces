#include<stdio.h>
int main()
{
    int T,Lift_position,My_position,i;
    int Result[100];
    scanf("%d",&T);
    if(T>=1 && T<=25){
        for(i=1;i<=T;i++){
            scanf("%d %d",&My_position,&Lift_position);

            if(My_position>0 && Lift_position<=100){
        Result[i]=(Lift_position-My_position)*4+11+(My_position*4)+8;

    }



    }
    for(i=1;i<=T;i++){
        printf("Case %d: %d\n",i,Result[i]);
    }
    }


    return 0;
}
