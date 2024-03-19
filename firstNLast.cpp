#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int start =0;
    int end  = n-1;
    int ans = -1;

    int mid ;
    while(start<= end){
        mid = start +(end -start)/2;
        if(arr[mid]==key)
        {   
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
        

    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int ans =-1;
    int start =0;
    int end = n-1;
    int mid = start + (end -start)/2;

    while(start <= end){
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;

        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}



int main(){
    int arr[5] ={5,6,6,9,10};
    int key = 3;
    pair<int , int> p;
    int firstOcc= firstOccurence(arr, 5, 6);
    int lastOcc = lastOccurence(arr,5,6);
    p.first = firstOcc;
    p.second = lastOcc;

    cout<< p.first<<" "<<p.second;

}