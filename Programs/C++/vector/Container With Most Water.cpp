// To find the container with most water


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>height) {
        int max_area=0;
        int area = 0;
        int left_pointer = 0;
        int right_pointer = height.size()-1;
        for(int i = 0;i<height.size()-1; i++){
            if(height[right_pointer]>height[left_pointer]){
                area = (right_pointer-left_pointer)*height[left_pointer];
                if(max_area<area){
                    max_area = area;
                }
                left_pointer +=1;

            }
            else{
                
                area = (right_pointer-left_pointer)*height[right_pointer];
       
                if(max_area<area){
                    max_area = area;
                }
                right_pointer-=1;
                
            }

        }
        
        return max_area;
        
    }
};