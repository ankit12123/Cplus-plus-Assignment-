//Write a program to find the greater of two numbers.
#include<iostream>
using namespace std;
int main(){
        int num1,num2;
        cout<<"Enter the First  number:";
        cin>>num1;
        cout<<"Enter the Second number:";
        cin>>num2;

        if(num1>num2){
            cout<<"First Number is greater than second:  "<<num1 <<">"<<num2;

        }
        else if(num1==num2){
            cout<<"Both are equal:";
        }
        else{
             cout<<"Second Number is greater than First : "<<num2<<">"<<num1;
        }

}

