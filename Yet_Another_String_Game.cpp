#include <iostream>
#include <string.h>
using namespace std;

int main(){

    int n, len, i;
    char ss[55];

    cin >> n;

    cin.ignore();

    while(n--){
        cin.getline(ss, 55);
        len = strlen(ss);

        for(i=0;i<(len-1);i+=2) {
            if(ss[i] == 'a'){
                cout<<'b';
            }else{
                cout<<'a';
            }
            if(ss[i+1]=='z'){
                cout<<'y';
            }else{
                cout<<'z';
            }
        }
        if(len & 0x1){ // odd
            if(ss[i] == 'a'){
                cout<<'b';
            }else{
                cout<<'a';
            }
        }
        cout<<endl;
    }
}