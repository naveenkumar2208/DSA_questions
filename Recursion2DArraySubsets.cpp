//Form subsets containg the elements of the 2D input array and return them. 
//Provided you mainatin the sequence of elemnts of the original input array

#include<bits/stdc++.h>
using namespace std;

int arraySubset(int arr[], int n, int output[][20]){
    //base case
  if(n==0){
    output[0][0]=0;
    return 1;
  }
  
  //smaller recursive call
  int size= arraySubset(arr+1,n-1,output);
  
  //Our calculation
  for(int i=0;i<size;i++)
  {
    int k=output[k][0];
    output[size+i][0]=k+1;
    output[size+i][1]=arr[0];
    
    for(int j=0;j<k;j++){
      output[size+i][j+2]=output[i][j+1];
    }
  }
  return size*2;
  
}
    

int main() {
  int arr[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> arr[i];
  
  int size1 = arraySubset(arr, length, output);

  for( int i = 0; i < size1; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}


  
  
