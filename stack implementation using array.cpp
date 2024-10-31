#include<iostream> 
using namespace std;
class Stack{
    int *arr;
    int top;
    int capacity;
public:
    Stack(int size){
        arr=new int[size];
        capacity=size;
        top=-1;
    }

     void  push(int x){
            if(isFull()){
                cout<<"Stack is overflow";
                return;
            }
             arr[++top]=x;
        cout<<x<<" is pushed"<<endl;
        }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is underflow";
            return -1;
        }
        cout<<arr[top]<<" is poped"<<endl;
        top--;
     return top;
    }
    bool isFull(){
        if(top==capacity-1){
            return 1;
        }
        return 0;

    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
    
        return 0;}
        int size(){
          return top;
        }
    int peek(){
        cout<<"top element "<<arr[top]<<endl;
        return top;
    }
    int Display(){
        cout<<"Elements  are ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }

    };
    int main(){
        Stack S(5);
        S.push(20);
        S.push(10);
        S.push(40);
        S.pop();
        S.peek();
        S.Display();
    }