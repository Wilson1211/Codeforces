#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, k, flag;
    char st[200000];
    char *result;
    char ch;
    memset(st, '\0', 200000);

    ch = getchar();

    i = 0;
    while(ch != '\n') {
        st[i++] = ch;
        ch = getchar();
    }

    result = (char*) malloc(sizeof(char)*(i+1));
    memset(result, '\0', i+1);
    k = 1;
    flag = 0;
    result[0] = st[0];

    for(j = 1; j < i; j++) {
        //printf("flag: %d\n", flag);
        if(flag == 1){
            if(st[j] == st[j-1]) {
                
            }else{
                result[k++] = st[j];
                flag = 2;
            }
        }else if(flag == 2){
            if(st[j] == st[j-1]) {
                
            }else{
                result[k++] = st[j];
                flag = 0;
            }
        }else{
            result[k++] = st[j];
            if(st[j] == st[j-1]) {
                flag = 1;
            }
            
        }
    }

    printf("%s", result);
    free(result);
    return 0;    
}