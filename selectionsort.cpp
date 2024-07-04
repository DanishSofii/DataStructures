#include <bits/stdc++.h>
using namespace std;

void  selectionSort(int arr[], int n){
    for(int i = 0 ; i < n -2;i++){
        int minIndex = i;
        for(int j = i ; j <= n-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){
    int arr[] ={3,4,2,1,7,9,5};
    int n = 7;
    selectionSort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}