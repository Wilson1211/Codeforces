#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
    int t;
    ll a, b, cont;
    cin >> t;

    while(t--) {
        cin >> a >> b;
        
        ll x, y, minn = 50;
        y = b;
        cont = 0;
        if(b == 1){
            y++;
            cont = 1;
        }
        for(int i=0;i<30;i++) {
            ll xx = a;
            ll yy = y;
            ll cc = cont;
            yy += i;
            cc += i;
            while(xx>0){
                xx/=yy;
                cc++;
            }
            minn = min(minn, cc);
        }
        cout<<minn<<endl;
    }



}


#if 0
ll cnt(ll a, ll b){
    if(a == 0) return 0;
    if(a < b) return 1;
    if(a == b) return 2;
    ll max1, max2;
    max1 = 1+cnt((a/b), b);
    max2 = 2+cnt(a/(b+1), b+1);
    if(max1 < max2) return max1;
    return max2;
}

int main() {

    int t;
    ll a, b, cont;

    cin >> t;

    while(t--){
        cont = 0;
        cin >> a >> b;
        if(a==0) cout<<0<<endl;
        else{
            if(b == 1) {
                b++;
                cont=1;
            }
            cont += cnt(a, b);
            cout<<cont<<endl;
        }
    }


    
}

#endif