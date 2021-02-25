#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long INF = 1e18;



vector<vector<ll>> level; // use dfs to trace nodes
vector<vector<ll>> g; // neighbor
vector<ll> vis;
vector<ll> dp;
vector<vector<ll>> par;

void dfs(int dep, int x) {
    for(auto i: g[x]){
        if(vis[i]) continue;
        vis[i] = 1;
        level[dep].push_back(i);
        dfs(dep+1, i);
    }
}

int main() {

    int t;
    ll n, tmp;
    vector<ll> A; // value
    

    
    cin >> t;
    
    while(t--) {
        cin >> n;

/*        for(ll i=1;i<=n;i++) {
            level[i].clear();
            g[i].clear();
        }
        */
        level.assign(n, {});
        g.assign(n, {});
        par.assign(n, {});
        A.clear();
        A.resize(n);
        vis.clear();
        vis.resize(n);
        dp.clear();
        dp.resize(n);
        
        par[0].push_back(0);
        A[0] = 0;

        for(ll i=1;i<n;i++) { // input parent
            cin >> tmp;
            g[tmp-1].push_back(i); // parent store child
            //g[i].push_back(tmp-1); // child store parent
            par[i].push_back(tmp-1);
        }

        dfs(1,0);
        for(ll i=1;i<n;i++) {
            cin >> A[i];
        }

        for(int i=1;i<n && level[i].size() != 0;i++) {
            ll minval = INF, maxval = -INF; // use for non swap
            ll x = -INF, y=-INF; // use for swap
            for(auto j: level[i]) {
                x = max(x, dp[par[j][0]]+A[j]);
                y = max(y, dp[par[j][0]]-A[j]);
                minval = min(minval, A[j]);
                maxval = max(maxval, A[j]);
            }

            for(auto j: level[i]) {
                dp[j] = max(x-A[j], y+A[j]);
                dp[j] = max(dp[j], dp[par[j][0]]+max(abs(A[j]-minval), abs(maxval - A[j]) ));
            }

        }
        ll maxval = -INF;
        for(ll i=0;i<n;i++) {
            maxval = max(dp[i], maxval);
        }
        cout<<maxval<<endl;

#ifdef debug
        cout<<"dp: \n";
        for(ll i=0;i<n;i++) {
            cout<<dp[i] << " ";
        }
        cout<<endl;
#endif

    }




}