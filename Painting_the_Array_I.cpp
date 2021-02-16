#include <iostream>
#include <string.h>
using namespace std;

int main(){

    long long int N;

    long long int *ptr1 , *ptr2, *input;
    long long int index1, index2;
    long long int ret = 2;

    cin >> N;
    if(N == 1) {
        ret = 1;
        cout<<ret<<endl;
    }else if(N==2){
        ret = 2;
        cout<<ret<<endl;
    }else{
        
        input = (long long int*)malloc(N*sizeof(long long int));
        ptr1 = (long long int*)malloc(N*sizeof(long long int));
        ptr2 = (long long int*)malloc(N*sizeof(long long int));
        for(int i=0;i<N;i++){
            cin >> input[i];
        }
        *ptr1 = input[0];
        *ptr2 = input[1];
        index1 = index2 = 0;
        for(int i=2;i<N;i++){
            if(input[i] == ptr1[index1]){
                if(input[i]==ptr2[index2]){
                    index1++;
                    ptr1[index1] = input[i];
                }else{
                    index2++;
                    ptr2[index2] = input[i];
                    ret++;
                }
            }else{
                index1++;
                ptr1[index1] = input[i];
                ret++;
            }
        }

        cout<<ret<<endl;

        free(input);
        free(ptr1);
        free(ptr2);
    }
}