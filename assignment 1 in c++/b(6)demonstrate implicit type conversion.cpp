// Write a program to demonstrate implicit type casting by adding an integer and a float value and displaying the result.

#include<iostream>
using namespace std;
int main(){
        int a;
        float b;
        float c;
        int d;

        cout<<"Enter two Numbers a And b : ";
        cin>>a>>b;

        c=a+b; // float variable
        d=a+b; // int variable

        cout<<"int and float are stored in float variable is : "<< c;
        cout<<" \n int and float are stored in int variable is : "<< d;
}
