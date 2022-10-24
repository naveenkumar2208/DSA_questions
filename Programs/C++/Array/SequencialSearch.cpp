#include <iostream>
using namespace std;

int SeqSearch(int A[], int k, int len){
    int i = 0;
    while (i < len && A[i] != k ){
        i++;
    }
    if (i < len){
        return i;
    }else{
        return -1;
    }
}

int main(){
    int len, number;
    cout << "enter the number you want to search: ";
    cin >> number;
    cout << "\n";
    cout << "Enter the array size: ";
    cin >> len;
    int Array[len];
    cout << "Chosen numbers: ";
    for(int i = 0; i < len; i++){
        cin >> Array[i];
    }
    int value = SeqSearch(Array, number, len);
    if(value == -1){
        cout << "The number is not in the array";
    }else{
        cout << "The number is in the array, at position:" << value+1;
    } 
}

