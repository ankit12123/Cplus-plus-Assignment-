//Write a program to find the largest of three numbers using nested if statements.
#include<iostream>
using namespace std;
int main(){
         int num1,num2,num3;
        cout<<"Enter your three Number:";
        cin>>num1>>num2>>num3;

        if(num1>num2){
            if(num1>num3){
                cout<<"Largest number is : "<<num1;
            }
        }
         else if(num2>num3){
                if(num2>num1){
                    cout<<"Largest number is : "<<num2;
                }
        }
        else{
            cout<<"Largest number is : "<<num3;
        }
}
