#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subsequenceSumOne(int index, vector<int>& ds,int s, int sum, int arr[],int n){
    if(index == n){
        if(s == sum){
            for (auto it:ds) cout<<it<<" ";
            return true;
        }
        else return false;

    }

    ds.push_back(arr[index]);
    s += arr[index];

    if(subsequenceSumOne(index+1, ds,s,sum,arr,n) == true){
        return true;
    }

    s-= arr[index];
    ds.pop_back();

    if(subsequenceSumOne(index+1, ds,s,sum,arr,n) == true ){
        return true;
    }

    return false;
}


int main(){
    int arr[] = {1,2,1};
    int sum =2;
    int n=3;
    vector<int> ds;

    subsequenceSumOne(0,ds,0,sum,arr,n);
}