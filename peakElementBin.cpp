#include <iostream>
#include <vector>
using namespace std;

int peakElement(int arr[], int n)
{
    int start =0;
    int end  = n-1;
    int mid = start + (end - start)/2;
    while(start < end){
        
        if(arr[mid] <arr[mid +1])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int arr[5] {1,170,20,3,1};
    int ans = peakElement(arr,5);
    cout<<ans;

}