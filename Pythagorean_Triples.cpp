#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll t, n;

    cin >> t;
    while(t--){
        cin >> n;
        ll sq = (ll)(floor(sqrt(2*n-1)));
        ll ans = (sq+1)/2;
        cout<<ans-1<<endl;
    }
}