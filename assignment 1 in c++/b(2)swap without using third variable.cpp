// Write a program to swap two numbers without using a third variable.
#include<iostream>
using namespace std;
int main(){
        int a,b;

        cout<<"Enter the Two Numbers :";
        cin>>a>>b;

        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"Swap of 1st Number is : "<<a;
        cout<<" \n Swap of 2nd Number is :"<<b;

}
