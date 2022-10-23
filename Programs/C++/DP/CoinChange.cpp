/*Given an array coins of size n representing coins of different denominations and an integer amount,
Return the number of combinations that make up that amount. If that amount cannot be made, return 0
There are infinite number of each type of coin*/

#include<bits/stdc++.h>
using namespace std;
const int N = 5e3+10;
int dp[310][N];

int func(int ind, int amount, vector<int> &coins){
    if(amount==0) return 1;
    if(ind<0) return 0;
    if(dp[ind][amount]!=-1) return dp[ind][amount];
    int ans = 0;
    for(int coin_amount=0;coin_amount<=amount;coin_amount+=coins[ind]){
        ans+=func(ind-1,amount-coin_amount,coins);
    }
    return dp[ind][amount] = ans;
}

int main(){
    int n,k; cin>>n>>k;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    for(int i=0;i<310;i++) for(int j=0;j<N;j++) dp[i][j]=-1;
    int ans = func(n-1,k,coins);
    cout<<ans<<"\n";
}