#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsequenceSum(int index, vector<int>& ds, int s, int sum, int arr[], int n){

    if(index == n){
        if(s==sum){
            for (auto  it:ds) cout << it <<" ";
            cout<<endl;
        }
        return;
    }
    // include
    ds.push_back(arr[index]);
    s += arr[index];
    subsequenceSum(index+1,ds,s,sum,arr,n);
    s-= arr[index];
    ds.pop_back();

    // exclude  
    subsequenceSum(index+1,ds,s,sum,arr,n);

}
int main(){
    int arr[]={1,2,1};
    int n =3;
    int sum=2;
    vector<int> ds;
    subsequenceSum(0,ds,0,sum,arr,n);
}