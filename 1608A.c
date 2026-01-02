
#include<stdio.h>

int main()
{
    int t, n, j;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);


        for(j = 1; j <= n; j++){
            printf("%d ", j+1);

        }
        printf("\n");
    }

    return 0;
}



