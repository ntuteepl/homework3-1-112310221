#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, d1, s2, d2, s3, d3, used = 0, i;
    scanf("%d%d%d%d%d%d", &s1, &d1, &s2, &d2, &s3, &d3);
    
    for (i = 1; i <= 24; i++) {
        if (i == d1 || i == d2 || i == d3) {
            if (used > 0) {
                used--;
            }
        }
        if (i == s1 || i == s2 || i == s3) {
            used++;
        }
    }
    
    printf("%d", used);
    return 0;
}
