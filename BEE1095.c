#include<stdio.h>
int main(){
    int I,J=60;
    for(I=1;I<J;){
        for(J=60;J>=0;J-=5){
             printf("I=%d J=%d\n",I,J);
             I+=3;
        }
    }
    return 0;

}
