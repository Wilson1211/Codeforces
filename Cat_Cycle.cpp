#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll n, k;
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        k--;
        if(n&1==0){
            cout<<k%n+1<<endl;
        }else{

            ll circle = n/2;
            ll times = k/circle;
            ll moves = k%circle;
            

            ll last_meet = n-(times*circle)%n;
            ll index_B = (last_meet+moves)%n+1; // (last_meet+1+n-1)%n+1+moves;
            //index_B %=n;
            cout<<index_B<<endl;
        }

    } 

}