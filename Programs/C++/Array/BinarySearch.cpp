#include<iostream>
using namespace std ;

int binarySearch(int arr[] , int size , int key){
    int start = 0 ; 
    int end = size-1;

    int mid= start + (end-start)/2;

    while(start <=end){
        if(arr[mid] == key){
            return mid;
        }
        
        //go to right part 
        if(key >arr[mid]){
            start = mid +1;
        }
       else{  //go to left part  i.e , key < arr[mid]
            end = mid -1 ; 
        }
        mid = start + (end-start)/2;
    }
    return -1 ;


}


int main(){
    int even [6] ={2,4,6,8,12,18};
    int odd[5] ={3,8,11,14, 16};

    int index  = binarySearch(even , 6 , 6);
    cout<<"The index of the given element is "<<index<<endl;

    int index2 = binarySearch(odd , 5 , 11);
    cout<<"The index of the element in odd array is"<<index2<<endl;
}
