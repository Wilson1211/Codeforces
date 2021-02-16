#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int aa[105];
    int n, N, t;
    int minn, secmin;
    int min_cnt = 1, secmin_cnt=0;
    cin >> t;

    while(t--) {
        cin >> N;
        n = N;
        for(int i=0;i<N;i++) cin >> aa[i];
        sort(aa, aa+n);

        min_cnt = 1;
        int i = 1;
        for(;i<N && aa[i] == aa[0];i++){
            min_cnt++;
        }
        cout<<n-min_cnt<<endl;
    

/*
    while(t--){
        cin >> N;
        n = N;
        for(int i=0;i<N;i++) cin >> aa[i];
        sort(aa, aa+n);
        

        min_cnt = 1;
        secmin_cnt = 0;

        int i=1;
        for(i=1;i<N && aa[i] == aa[0];i++){
            min_cnt++;
        } 
        if(i == N){
            cout<<0<<endl;
        }else{
            secmin = aa[i];
            secmin_cnt++;
            i++;
            for(;i<N;i++){
                if(aa[i] == secmin){
                    secmin_cnt++;
                    if(secmin_cnt >1){
                        break;
                    }
                }
            }
            if((secmin_cnt+min_cnt)>=3){
                cout<<n-min_cnt<<endl;
               
            }else if(N==2){
                if(aa[0] != aa[1]) cout<<1<<endl;
                else cout<<0<<endl;
            }else{
                cout<<n-min_cnt-secmin_cnt<<endl;
            }
        }
*/
/*

        for(int i=1;i<N;i++){
            if(aa[i] == aa[0]) min_cnt++;
            else{
                secmin = aa[i];
                secmin_cnt++;
                if(secmin_cnt >1){
                    break;
                }
            }
        }

        if(secmin_cnt && min_cnt>=2){
            cout<<n-min_cnt<<endl;
        }else if(secmin_cnt>1 && min_cnt){
            cout<<n-min_cnt<<endl;
        }else{
            cout<<n-min_cnt-secmin_cnt<<endl;
        }
*/

    }

#if 0
    while(t--){
        cin >> N;
        n = N;
        
        cin >> aa[0];
        minn = prev_min = aa[0];
        count = 1;
        for(int i=1;i<N;i++){
            cin >> aa[i];
            minn = min(aa[i], minn);
            if(aa[i] == prev_min) count++;
            else count=1;
            prev_min = minn;
        }

        //sort(aa, aa+i);


        cout<<n-count<<endl;




    }
#endif
    
}