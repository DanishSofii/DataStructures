#include <bits/stdc++.h>
using namespace std;

void  bubbleSort(int arr[], int n){
    for(int i = n-1; i>=0;i--){
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main(){
    int arr[] ={3,4,2,1,7,9,5};
    int n = 7;
    bubbleSort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}