//Given an integer, return summ of its digits recursively
//have added comments in the code for better understanding

#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    //base case
    if(n==0){
        return 0;
    }
    
    //small recursive call
    int sum_small=sumOfDigits(n/10);
    
    //our calculation
    return sum_small+n%10;
 }

int main(){
      int n;
      cin>>n;
      cout<<sumOfDigits(n);
 }
