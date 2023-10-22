#include <stdio.h>
#include <stdlib.h>

int main()
{
//質數=>1和自己
    int i,j,k;
    scanf("%d",&i);
    for (j=2;i>j;j++){
        if (i%j==0){
        k=1;
        }
    }
    if (i<=1){
        k=1;
        }
        if(k==1){
            printf("NO");
        }
        else{
            printf("YES");
        }
}
//判斷質數
