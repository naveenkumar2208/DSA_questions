/*Given an array A of positive integers. 
Your task is to find the leaders in the array. 
An element of array is leader if it is greater than 
or equal to all the elements to its right side. 
The rightmost element is always a leader.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], long long n){
    // Code here
    int curr = a[n-1];
    vector<int> vec;
    vec.push_back(curr);
    for (long long i = n-2; i >= 0; i--)
    {
        if(curr<=a[i]){
            curr = a[i];
            vec.push_back(curr);
        }
        
    }
    reverse(vec.begin(),vec.end());
    return vec;
    
}


// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends