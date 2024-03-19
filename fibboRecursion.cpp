#include <iostream>
using namespace std;
int fibbo(int n){   
    if(n <= 1)
        return n;
    int last = fibbo(n-1);
    int slast = fibbo(n-2);
    return last + slast;
}
int main(){
    cout<< fibbo(4) ;
    return 0;
}