#include <stdio.h>
#include <stdlib.h>

int main()
{
int s1,d1,s2,d2,s3,d3,used,unused,i;
scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
      for(i = 1; i <= 24 ; i++){
        if(i == d1 || i == d2 || i == d3){
            unused += 1;
        }
        if(i == s1 || i == s2 || i == s3){
            if(unused == 0){
                used += 1;
            }else{
                unused -= 1;
            }
        }
    }
    printf("%d\n",used);
    }

