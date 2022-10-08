//In an integer array find the number of triplets which sum up to a required number
//I have added comments in the code for better understanding

#include<bits/stdc++.h>
using namespace std;

int sumOfTriplet(int*arr,int size,int num){
  //mainatin count variable to keep track of number of triplets
   int count=0;
  //first for loop, to convert the question into sumOfPair type problem
    for(int i=0;i<size;i++){    
   //second for loop
      for(int j=i+1;j<size;j++){
    //third for loop
        for(int k=j+1;k<size;k++){
    //checking required condition is satisfied or not
           if(arr[j]+arr[k]==num-arr[i]){
             count++;
            }
        }
      }
    }
      return count;
}
          
  

int main(){
  cout<<"enter the size of array:";
  int size;
  cin>>size;
  cout<<"enter the required number:";
  int num;
  cin>>num;
  cout<<"enter the elements of array:";
  int arr[size];
  for(int i=0; i<size;i++){
        cin>>arr[i];
  }
  cout<<"number of triplets with sum equal to required number is:"<<sumOfTriplet(arr,size,num);
}
