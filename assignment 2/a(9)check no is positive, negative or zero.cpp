//Write a program to check whether a number is positive or negative .
#include<iostream>
using namespace std;
int main(){
        int num;
        cout<<"Enter the number:";
        cin>>num;

        if(num>0){
            cout<<"Positive Number : "<<num;
        }
        else if(num==0){
            cout<<"Number is Zero: "<<num;
        }
        else{
            cout<<"Negative Number: "<<num;
        }
}

