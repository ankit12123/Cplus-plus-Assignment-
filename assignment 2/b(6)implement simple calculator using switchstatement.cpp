//Write a Program to implement a simple calculator using the switch statement .
#include<iostream>
using namespace std;
int main(){
        int a,b;
        char calculator;
        cout<<"Enter the two Number and symbol : ";
        cin>>a>>calculator>>b;


       switch(calculator){
            case '+':{
            int add=a+b;
              cout<<"Result "<<add;
              break;
       }

            case '-':{
            int sub=a-b;
            cout<<"Result "<<sub;
            break;
         }

            case '*':{{
            int multi=a*b;
            cout<<"Result "<<multi;
            break;
            }

            case '/':{
            int div=a/b;
            cout<<"Result "<<div;
            break;
            }

            default:
             cout<<"Not in simple calculator ";

            }}}



