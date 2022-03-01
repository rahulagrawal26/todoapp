#include<iostream>
#include<climits>
using namespace std;
class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

   StackUsingArray(int totalsize){
       data=new int[totalsize];
       nextIndex=0;
       capacity=totalsize;
       }
 
    void push(int element){
      if(nextIndex==capacity){
          cout<<"Stack is full"<<endl;
          }
           data[nextIndex]=element;
           nextIndex++;
     }
    int top(){
        if(isEmpty()){
            cout<<"empty"<<endl;
            return INT_MIN;
        }  
      return data[nextIndex-1];
    }

    int pop(){
        if(isEmpty()){
            cout<<"empty"<<endl;
            return INT_MIN;
        }
       nextIndex--;
       retun data[nextIndex];

    }
     bool isEmpty(){
         return nextIndex==0;
     } 
     int size(){
        return nextIndex;
    }
       




};
int main(){

}