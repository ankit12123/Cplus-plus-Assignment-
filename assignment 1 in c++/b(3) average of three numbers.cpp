//Write a program to calculate the average of three numbers entered by the user.
#include<iostream>
using namespace std;
int main(){
        int a,b,c,avg;

        cout<<"Enter the Three Numbers :";
        cin>>a>>b>>c;

        avg=(a+b+c)/3;

        cout<<"The Average of Three numbers is : "<<avg;
}
