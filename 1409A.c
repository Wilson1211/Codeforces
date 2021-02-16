#include <stdio.h>
#include <stdlib.h>



int main() {
    int k, n;
    unsigned long a, b;
    scanf("%d", &n);
    while(n--) {
        scanf("%u%u", &a, &b);
        k = b-a;
        if(k<0) k = -k;
        //printf("%u\n", k/10+k%10);
        if(k%10) {
            printf("%u\n", k/10+1);
        }else {
            printf("%u\n", k/10);
        }
        
    }
    return 0;
}