//to find the longest common prefix
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>strs) {
        string output = "";
        
        for(int i = 0;i<strs[0].size();i++){
            char letter = strs[0][i];
            int count = 0;
            for(int j = 0; j<strs.size();j++){
                if(letter == strs[j][i]){
                    count+=1;   
                }  
            }
            if(count == strs.size()){
                output = output + letter;
            }
            else{
                break;
            }
            
            
            
        }
        
        
        return output;
    }
};