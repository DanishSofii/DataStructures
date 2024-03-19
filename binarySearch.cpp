#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid] < key)
        {
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return -1;

}

int main(){

    int arr[5] ={1,2,3,4,5};
    int key = 5;
    int ans  = binarySearch(arr,5,key);
    cout<< ans;
}