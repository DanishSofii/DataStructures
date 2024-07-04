#include <iostream>
#include <vector>
using namespace std;

#define MAX 50
int top =-1;
int stack[MAX];

void push(int ele);
int pop();
void display();

void push(int ele){
    if(top == MAX -1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    else{
        top = top+1;
        stack[top] = ele;
    }
}


int pop(){
    if(top == -1){
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    else{
        int ele;
        ele = stack[top];
        top = top -1;
        return ele;
    }
}

void display(){

    if(top == -1){
        cout<<"Stack is empty"<<endl;
        return;
    }

    for(int i =top ; i>=0 ;i--){
        cout<<stack[i]<<" ";
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    push(5);
    display();
    pop();
    pop();
    pop();
    display();
}