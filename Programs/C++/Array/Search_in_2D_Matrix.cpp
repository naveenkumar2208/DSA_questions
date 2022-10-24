/*
This repository targets to search in a 2D matrix in the most efficient manner with time 
complexity eqaul to O(log(N)), using binary search
*/




#include<iostream>
#include<bitset/stdc++.h>
using namespace std


// Binary search algorithm
 
int binary_search(vector<int>& nums, int num){
    int end = nums.size()-1, start = 0, mid;
        
    while(end >= start){
        mid = (start+end)/2;
        if(nums[mid] == num){
            return num;
        }
        else if(nums[mid] > num){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
        
}


// Main function call for searching
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i = 0; i<matrix.size(); i++){
        int x = binary_search(matrix[i], target);
        if (x == target) return true;
    }
    return false;
}
