// Write a program to find the largest of three numbers using else if ladder.
#include<iostream>
using namespace std;
int main(){
        int num1,num2,num3;
        cout<<"Enter your three Number:";
        cin>>num1>>num2>>num3;

        if(num1>num2&&num1>num3){
            cout<<"\n First number is largest : "<<num1;
        }
        else if(num2>num1&&num2>num3){
            cout<<"\n Second number is largest : "<<num2;
        }
        else if(num3>num1&&num3>num2){
            cout<<"\n Third number is largest : "<<num3;
        }
        else{
            cout<<"\n All Numbers are Equal";
        }
}
