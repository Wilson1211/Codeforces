#include <stdio.h>
#include <stdlib.h>

int main() {
    int j, k, n;
    unsigned int a, b;
    unsigned int sum, minsum, index;
    unsigned int *ptr;
    
    index = 1;

    scanf("%u%u", &a, &b);
    
    ptr = (unsigned int *)malloc(sizeof(unsigned int)*a);
    for(unsigned int i=0;i<a;i++) {
        scanf("%u", &ptr[i]);
    }

    sum = 0;
    for(unsigned int i=0;i<b;i++) {
        sum += ptr[i];
    }

    minsum = sum;

    for(unsigned int i=b;i<a;i++) {
        sum += (ptr[i] - ptr[i-b]);
        if(minsum > sum) {
            minsum = sum;
            index = i-b+2;
        }
    }
    printf("%u\n", index);
    free(ptr);
}