#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, j, k;
    unsigned int n;
    scanf("%u", &n);
    if(n == 0) {
        printf("O-|-OOOO\n");
        return 0;
    }
    while(n>0) {
        k = n % 10;
        if(k >= 5) {
            printf("-O|");
            k-=5;
        }else{
            printf("O-|");
        }
        switch (k)
        {
            case 4:
                /* code */
                printf("OOOO-");
                break;
            case 3:
                printf("OOO-O");
                break;
            case 2:
                printf("OO-OO");
                break;
            case 1:
                printf("O-OOO");
                break;
            default:
                printf("-OOOO");
                break;
        }
        printf("\n");
        n/=10;
    }

    return 0;    
}