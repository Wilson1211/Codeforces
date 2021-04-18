#include <bits/stdc++.h>

using namespace std;

typedef int ll;
const long long INF = 1e18;



int main() {

    int t;
    ll num;
    vector<ll> dp;
    ll tmp;
    ll i, j;
    ll dp_sum;
    //ll **sum;
    vector<ll> sum;
    cin >> t;

    while(t--) {
        cin >> num;
        
        dp.resize(num);
        dp[0] = 1;
        vector<ll> B(num);
        sum.resize(num+1);

        //for(i=0;i<num;i++) {
        //    cin >> B[i];
        //}

        //sum = (ll**)malloc(num*sizeof(ll*));
        //sum[0] = (ll*)malloc(num*num*sizeof(ll));

        //for(i=1;i<num;i++) {
          //  sum[i] = sum[i-1] + num;
        //}

        // derive sum
        sum[0] = 0;
    //    for(i=0;i<num;i++) {
    //        sum[i+1] = sum[i]+B[i];
    //    }

        dp_sum = 0;

        //sum[1] = B[0];
        for(i=0;i<num;i++) {
            //dp_sum += dp[i-1];
            cin >> B[i];
            sum[i+1] = sum[i]+B[i];
            dp[i] = dp_sum;
            //tmp = 0;
            for(j=0;j<i;j++){
                if((sum[i]-sum[j])==0){
                    dp[i] -= dp[j];
                }
            }
            dp_sum += dp[i];
        }

        // output //
        /*
        tmp = 0;
        for(i=0;i<num;i++) {
            tmp = max(tmp, dp[i]);
        }
        
        cout<<tmp<<endl;
        */
        cout<<dp_sum<<endl;
        //free(sum[0]);
        //free(sum);
    }



}

#if 0
int main() {

    int t;
    ll num;
    ll i;
    cin >> t;

    while(t--) {
        vector<ll> dp;
        vector<ll> sum;
        vector<ll> x;
        ll tmp;

        cin >> num;

        dp.clear();
        dp.resize(num);
        sum.clear();
        sum.resize(num);
        x.clear();
        x.resize(num);
        
        dp[0] = 1;

        for(i=0;i<num;i++){
            cin >> x[i];
        }
        sum[0] = x[0];

        for(i=1;i<num;i++) {
            sum[i] = sum[i-1]+x[i];
            if(!x[i-1]) {
                dp[i] = dp[i-1];
            }else{
                dp[i] = dp[i-1]*2;
                if(sum[i-1] == 0) {
                    dp[i]--;
                }
            }
        }
        cout<<dp[num-1]<<endl;

    }
}
#endif