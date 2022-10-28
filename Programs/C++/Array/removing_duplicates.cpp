// Remove Duplicates from Sorted Array

#include <iostream>

#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 7394;
        int k = 0;
        for(int i = 0; i<nums.size();i++){
            if(a!=nums[i]){
                a = nums[i];
                nums[k]=a;
                k+=1;    
            }
        
            
            
        }
        return k;
        
    }
};


