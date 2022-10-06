/*Given an array A of n positive numbers. 
The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the 
sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)*/

#include <iostream>
using namespace std;

// Function to find equilibrium point in the array.
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {

    // Your code here
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    long long lSum = 0;

    for (int i = 0; i < n; i++)
    {
        if(lSum == total - a[i])
            return i+1;
        else
            total -= a[i];
        lSum += a[i];
    }
    return -1;
}

// { Driver Code Starts.

int main() {

    int t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
