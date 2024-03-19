#include <iostream>
using namespace std;

bool isPossible(int arr[], int n , int m  , int mid){
    int stucentCount = 1;
    int pageSum = 0;
    
    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <=mid)
        {
            pageSum += arr[i];
        }
        else
        {
            stucentCount++;
            if(stucentCount > m ||  arr[i] > mid){
                return false;
            }
            pageSum = 0;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks (int arr[],int n , int m){
    int start = 0;
    int sum = 0;
    for (int i =0;i<n;i++){
        sum +=arr[i];
    }

    int end = sum;
    int ans =-1;
    int mid ;

    while(start <= end){
         mid = start + (end -1 )/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
       
    }   
    return ans; 
}

int main(){
    int arr[4] = {10,20,30,40};
    int res = allocateBooks(arr,4,2);
    cout <<res;
}