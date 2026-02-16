//Write a program to check whether a number is even or odd .
#include<iostream>
using namespace std;
int main(){
        int num;
        cout<<"Enter the number:";
        cin>>num;

        if(num%2==0){
            cout<<"Even Number : "<<num;
        }

        else{
            cout<<"Odd Number: "<<num;
        }
}

