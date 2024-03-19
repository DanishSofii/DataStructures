#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(int index, int sum , int arr[] , int N , vector<int>& sumsubset){
        if(index == N){
            sumsubset.push_back(sum);
            return;
        }
        // pick the element
        func(index + 1 , sum + arr[index], arr,N,sumsubset);

        // not pick the element

        func(index + 1, sum , arr,N,sumsubset);

}
int main(){
        int arr[] = {3,1,2};
        int N = 3;
        vector<int> sumsubset;
        func(0,0,arr,N,sumsubset);
        sort(sumsubset.begin(),sumsubset.end());
        for(auto it:sumsubset){
            cout<< it << " ";
        }
        return 0;

}
