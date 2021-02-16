#include <iostream>
#include <string.h>
using namespace std;

typedef long long ll;

int main() {

    
    ll N, A, B, n;
    ll q_h, i, j, k;
    ll power, maxn = 0;
    ll pow[100001], hlt[100001];
    cin >> N;

    while(N--){
        cin >> A >> B >> n;
        maxn = 0;
        for(i=0;i<n;i++) { cin >> pow[i];maxn = max(maxn, pow[i]);}
        for(i=0;i<n;i++) cin >> hlt[i];
        for(i=0;i<n;i++){
            q_h = (ll)(hlt[i]-1)/A+1;
            B -= pow[i]*q_h;
        }
        B += maxn;
        if(B>0) cout<<"YES\n";
        else cout<<"NO\n";
    }


    
}

/*
int main(){

    long long int N, A, B, n;
    long long int *power, *health;

    long long int quotient;
    long long int q_h, q_m;

    int flag = 1;

    cin >> N;
    while(N--) {
        flag = 1;
        cin >> A >> B >> n;
        power = (long long int*)malloc(n*sizeof(long long int));
        health = (long long int*)malloc(n*sizeof(long long int));

        for(long long int i=0;i<n;i++) {
            cin >> power[i];
        }
        for(long long int i=0;i<n;i++) {
            cin >> health[i];
        }

        for(long long int i=0;i<n-1;i++){
            q_h = (long long int)((health[i]-1)/A+1);
            q_m = (long long int)((B -1)/power[i]+1);
            if(q_h>=q_m){
                flag = 0;
                cout<<"NO\n";
                break;
            }else{
                B -= q_h*power[i];
                if(B<=0) cout<<"hell_no\n";
            }
            
        }

        if(flag){
            
            q_h = (long long int)(health[n-1]-1)/A+1;
            q_m = (long long int)(B-1)/power[n-1]+1;
            if(q_h > q_m){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }


        free(power);
        free(health);

    }

}
*/