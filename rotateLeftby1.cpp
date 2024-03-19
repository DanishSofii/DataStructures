#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[4] ={5, 7, 3, 2};
    // rotateArray(arr,4); 
     int temp[4];

    for(int i=0; i< 4;i++)
    {
        temp[((i-1)%4)]=arr[i];
    }
    // arr = temp;
    // return arr;
     for(int i=0; i< 4;i++)
    {
        cout<<temp[i];
    }
}
