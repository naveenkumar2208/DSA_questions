/*
Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.

The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).

Example : 
input :
    N = 5
    arr = {40,20,30,10,30}
output : 26000

Explanation : There are 4 matrices of dimension 
40x20, 20x30, 30x10, 10x30. Say the matrices are 
named as A, B, C, D. Out of all possible combinations,
the most efficient way is (A*(B*C))*D. 
The number of operations are -
20*30*10 + 40*20*10 + 40*10*30 = 26000.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        int dp[N][N];
        for (int i = 0; i < N-1; i++)
        {
            dp[i][i+1] = 0;
        }
        for (int gap = 2; gap < N; gap++)
        {
            for (int i = 0; i < N-gap; i++)
            {
                int s = i, e = i+gap;
                dp[i][i+gap] = INT_MAX;
                for (int j = s+1; j < e; j++)
                {
                    dp[i][i+gap] = min(dp[i][i+gap],dp[s][j] + dp[j][e] + arr[s]*arr[j]*arr[e]);
                }
                
            }
            
        }
        
        return dp[0][N-1];
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
