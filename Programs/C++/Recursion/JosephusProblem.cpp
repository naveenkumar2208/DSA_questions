/*Given the total number of persons n and a number k 
which indicates that k-1 persons are skipped and kth 
person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so 
that when you perform these operations starting from 1st place 
in the circle, you are the last one remaining and survive.*/


#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;


int solve(int n, int k)
{
   if(n == 1)
        return 0;
    else
        return (solve(n-1,k) + k)%n;
}


int josephus(int n, int k)
{
   return solve(n,k) + 1;
}



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		cout<<josephus(n,k);
	}
	return 0;
}  // } Driver Code Ends