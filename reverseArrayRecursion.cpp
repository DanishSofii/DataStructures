#include <iostream>
using namespace std;

void reverseArr(int i, int arr[],int size)
{
    if(i >= size/2)
        return;
    swap(arr[i],arr[size-i-1]);
    reverseArr(i+1 , arr , size);
}
int main(){
    int arr[] = {1,2,3,4,5};
    reverseArr(0,arr,5);
    for(int i =0; i< 5 ;i++){
        cout << arr[i] << " ";
    }
    return 0;
}