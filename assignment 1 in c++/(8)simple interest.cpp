//Write a program to calculate the simple interest using principal,rate, and time, using the formula:
//Simple Interest (SI) = (P*R*T)/100.
#include<iostream>
using namespace std;
int main(){
        int principal,rate,time,SI;

        cout<<"Enter Principal value";
        cin>>principal;
        cout<<"Enter rate Value: ";
        cin>>rate;
        cout<<"Enter Time in years :";
        cin>>time;

        SI= (principal*rate*time)/100;

        cout<<"Simple Interest is : "<<SI;
}

