#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

typedef long long ll;



int main() {
    ll x, y;
    int t;
    ll ret;

    ll i, j, k;

    cin >> t;

    while(t--){
        ret = 0;
        cin >> x >> y;
        for(ll i=1;i*(i+1)<=x;i++){
            ll r = min(y, x/i-1);
            ret += max(0, (int)(r-i));
        }
        cout << ret << endl;
    }
}

#if 0
int main() {
    ll x, y;
    int t;
    ll ret;

    ll i, j, k;


    cin >> t;
    while(t--){
        cin >> x >> y;
        ret = 0;

        i = min(y, (ll)(sqrt(x+1)));
        //for(i=2;i<=y && (i*i-1)<=x;i++);//{
            //ret += i-1;
        //}



        ret = (i-1)*(i-2)/2;

        for(;i<=y&& i<x;i++){
            /*
            for(k=1;k<i;k++){
                if(i*k+k<=x) ret++;
                else break;
            }
            */
           k = x/(i+1);
           if(k >=i) k = i-1;
           ret += k;

        }
        
        cout<<ret<<endl;
    }

}
#endif