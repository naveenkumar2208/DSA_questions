/*Given an array Arr[] of N integers. 
Find the contiguous sub-array(containing at least one number) 
which has the maximum sum and return its sum.*/

#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;

long long maxSubarraySum(int arr[], int n){
    
    long long curr_max = arr[0];
    long long res = curr_max;
    for(int i = 1; i<n; i++){
        curr_max = max((curr_max + arr[i]), (long long)arr[i]);
        res = max(res,curr_max);
    }
    return res;
}

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}