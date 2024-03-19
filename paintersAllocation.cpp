#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int painterCount = 1;
    int time = 0;

    for(int i=0;i<n;i++)
    {
        if(time+arr[i] <= mid)
        {
            time += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] >mid)
            {
                return false;
            }
            time =0;
            time= arr[i];
        }
        
    }
    return true;
}

int paintersAllocation(int arr[],int n, int k){
    int start = 0;
    int ans = -1;
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int mid;
    while (start<=end)
    {
        mid = start + (end -1 )/2;
        if(isPossible(arr,n,k,mid)){
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
    int arr[4] = {5,5,5,5};
    int res = paintersAllocation(arr,4,2);
    cout <<res;
}