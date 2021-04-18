#include <iostream>
#include <string.h>
#include <limits>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
#include <deque>
#include <vector>
#include <map>
using namespace std;

int main() {

    int i, j, k, n;
    int max;
    ifstream file;
    //file.open("hanoi_factory_1.txt", 'r');
    cin >> n;

    int arr[n+1][3] = {}; // b a h
    int dp[n+1][n+1] = {};
    map<int, int> mm; // b index
    map<int, int>::iterator it, it2;
    int id1, id2;

    for(i=0;i<n;i++) {
        cin >> arr[i+1][1] >> arr[i+1][0] >> arr[i+1][2];
        mm.insert(pair<int, int>(arr[i+1][0], i+1));
    }

    //sort_b(arr); // sort according to b
    //sort(mm);
    
    it = mm.end();
    it--;
    for(i=1;i<=n;i++){
        int index = it->second;
        dp[1][i] = arr[index][2];
        it--;
    }

    for(i=1;i<=n;i++) {
        //max = 0;
        dp[i][1] = dp[1][1];
        it = mm.end();
        it--;
        for(j=1;j<=n;j++){
            it2 = mm.end();
            it2--;
            id1 = it->second;
            //cout<<"id1: "<<id1<<endl;
            max = 0;
            for(k=1;k<j;k++){
                id2 = it2->second;
                //cout<<"id2: "<<id2<<endl;
                if(arr[id2][1]<arr[id1][0]){
                    if(max < dp[i-1][k]){
                        max = dp[i-1][k];
                    }
                }
                it2--;
            }
            dp[i][j] = max + arr[id1][2];
            it--;
        }
    }

    max = 0;
    for(i=1;i<=n;i++){
        max = (max < dp[n][i])?dp[n][i]:max;
    }

    cout<<max<<endl;

}