#include <iostream>
using namespace std;

int HoarePartition(int A[], int l, int r){
    int pivot, i, j, aux;
    pivot = A[l];
    i = l;
    j = r+1;
    do{
       do{
        i++;
       }while(A[i] < pivot && i < r);
       do{
        j--;
       }while(A[j] > pivot);
       aux = A[i];
       A[i] = A[j];
       A[j] = aux;
    }while(i < j);
    aux = A[i];
    A[i] = A[j];
    A[j] = aux;
    aux = A[l];
    A[l] = A[j];
    A[j] = aux;
    return j;
}

void Quicksort(int A[], int l, int r){
    int S;
    if(r > l){
        S = HoarePartition(A, l, r);
        Quicksort(A, l, S-1);
        Quicksort(A, S+1, r);
    }
}


int main(){
    int len;
    cout << ("Enter the array size: ");
    cin >> len;
    int Array[len];
    cout << ("Chosen numbers: ");
    for(int j = 0; j < len; j++){
        cin >> Array[j];
    }
    Quicksort(Array, 0, len-1);
    cout << ("Sorted array: ");
    for(int m = 0; m < len; m++){
        cout << Array[m] << " ";
    }
}
