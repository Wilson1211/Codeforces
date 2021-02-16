#include <iostream>


using namespace std;

typedef long long ll;

int main() {
    ll n, q, k;
    ll i, j;
    ll b1, b2, cnt;
    ll a[100001];
    cin >> n >> q >> k;

    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<q;i++){
        cin >> b1 >> b2;
        cnt = 0;

        if(b1 == b2){
            cnt = k-1;
        }else{
            cnt = a[b1]-2;
        
            if((b2-b1)>3){
                cnt += a[b2-1]+a[b2-2]-a[b1]-a[b1-1];
                cnt -= 2*(b2-b1-1);
            }else{
                for(j = b1;j<=b2-2;j++){
                    cnt += a[j+1]-a[j-1]-2;
                }
            }

            cnt += k-a[b2-2]-1;

        }

        cout<<cnt<<endl;
    }

}