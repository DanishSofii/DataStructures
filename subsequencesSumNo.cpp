#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subsequenceSumNo(int index ,int s, int arr[], int sum, int n){
    if(index == n){
        if(s == sum){
            return 1;
        }
        return 0;
    }

    s+= arr[index];
    int l = subsequenceSumNo(index+1,s,arr,sum,n);

    s-= arr[index];

    int r = subsequenceSumNo(index+1,s,arr,sum,n);

    return l+r;
}


int main(){
    int arr[] ={1,2,1};
    int sum=2;
    int n=3;

    cout<< subsequenceSumNo(0,0,arr,sum,n);
}