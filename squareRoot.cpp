#include <iostream>
using namespace std;

bool isPossible(int n ,int mid)
{
    long long int square = mid * mid;
    if(square < n)
    {
        return true;
    }
    else{
        return false;
    }
}

int getSquareRoot(int n){
    int arr[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int start  = 0;
    int end  = n-1;
    int result = -1;

   

    while(start <= end){
         int mid = start + (end -start)/2;
        if(isPossible(arr[mid],mid)){
            result = mid;
            start = mid +1;
        }
        else 
        {
            end = mid -1;
        }

    }
    return result;
  
}

int main(){
    int ans = getSquareRoot(5);
    cout << ans;
}