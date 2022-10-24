/*
Question: Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1: 
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

//Solution :
class Solution {
private:
    void reverse(vector<int> &arr,int start,int end){
        int k = 0;
        for(int i=start;i<=(start+end)/2;i++){
            swap(arr[i],arr[end-k]);
            k++;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        // No of times array get rotated 
        // if k > nums.size() we have to take care of that case too
        int n = nums.size();
        int rTimes = k % n;
        
        if(rTimes == 0 or rTimes == n){
            return;
        }
        
        // reversing the complete array
        reverse(nums,0,n-1);
        
        // reversing the first half 
        reverse(nums,0,rTimes-1);
        
        // reversing the second half
        reverse(nums,rTimes,n-1);
        
        
    }
};

