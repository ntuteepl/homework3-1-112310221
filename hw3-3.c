#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count(int n){
    int a, b = 0;
    while(n > 0){
        a = n % 10;
        b = b + a;
        n = n / 10;
    }
    return b;
}
//計算千百十個位數

void main()
{
    int i1, i2;
    int c1, c2;
    scanf("%d%d", &i1, &i2);

    c1 = count(i1);
    c2 = count(i2);

    if(c1 > c2){
        printf("%d", i2);
    }else if(c1 < c2){
        printf("%d", i1);
    }else{
        printf("%d", (i1 > i2)? i2 : i1);
    }
}

