/*Lucky numbers are subset of integers. 
Rather than going into much theory, let us see the 
process of arriving at lucky numbers,
Take the set of integers
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
First, delete every second number, we get following reduced set.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
Now, delete every third number, we get
1, 3, 7, 9, 13, 15, 19,….….
Continue this process indefinitely……
Any number that does NOT get deleted due to above process is called “lucky”.*/


#include <bits/stdc++.h>
using namespace std;


// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False


bool solve(int n, int i) {
    if(i > n) 
        return 1;
    if(n % i == 0) 
        return 0;

    return solve(n - n/i, i + 1);
}

bool isLucky(int n){
    int i= 2;
    return solve(n,i);
}


signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        //calling isLucky() function
        if(isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  