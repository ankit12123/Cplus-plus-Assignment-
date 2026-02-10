//Write a program to swap two numbers using a third variable.
#include<iostream>
using namespace std;
int main(){
        int a,b,c;

        cout<<"Enter the Two Numbers :";
        cin>>a>>b;

        c=a;
        a=b;
        b=c;

        cout<<"Swap of 1st Number is : "<<a;
        cout<<" \n Swap of 2nd Number is :"<<b;

}
