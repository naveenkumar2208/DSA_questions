/*
    Given an array array of N non-negative integers representing the height of blocks.
    If width of each block is 1, if it rains find the amount of water that gets trapped in between the blocks.
*/

#include<bits/stdc++.h>
using namespace std;

int trappedWater(vector<int> &height, int &blocks ){
    int water = 0;
    int leftMax = height[0]; // stores the maximum height of block on left
    int rightMax = height[blocks-1]; // stores the maximum height of block on right

    // stores the height of largest block present on the left of current block for every block
    vector<int> maxLeft(blocks, 0);
    for(int i = 0; i < blocks; i++){
        maxLeft[i] = max(leftMax, height[i]); 
        leftMax = max(leftMax, height[i]);
    }

    // stores the height of largest block present on the right of current block for every block
    vector<int> maxRight(blocks, 0);
    for(int i = blocks-1; i >= 0; i--){
        maxRight[i] = max(rightMax, height[i]);
        rightMax = max(rightMax, height[i]);
    }

    // to calculate the water trapped we use the logic that, water will only be trapped
    // if there is a block of higher height on left as well as on its right
    // and the amount will be calculated using their minimum.

    for(int i = 0 ; i < blocks ; i++){
        int waterInCurrentBlock = min(maxRight[i], maxLeft[i]) - height[i];
        water += waterInCurrentBlock;
    }

    return water;

}

int main(){

    int blocks;
    cout << "Enter the number of blocks :";
    cin >> blocks;
    vector<int> height(blocks);
    cout << "Enter the heights of blocks : ";
    for(int i = 0 ; i < blocks ; i++){
        cin >> height[i]; 
    }

    cout << "Maximum units of water trapped between the blocks : " << trappedWater(height, blocks) << endl;

    return 0;
}