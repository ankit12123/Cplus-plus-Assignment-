//Write a program to check whether a given number is divisible by 5.
#include<iostream>
using namespace std;
int main(){
        int num;
        cout<<"Enter the number:";
        cin>>num;

        if(num%5==0){
            cout<<" Number is divisible by 5: "<<num;
        }

        else{
            cout<<" Number is not divisible by 5: "<<num;
        }
}

