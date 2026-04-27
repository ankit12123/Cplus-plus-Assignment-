//Write A program in c++ to find the factorial of a number.
#include<iostream>
using namespace std;
int main(){
        int num,i,fact=1;

        cout<<"Enter the Number for factorial :";
        cin>>num;

        for(i=1;i<=num;i=i+1){

            fact = fact * i;

        }
        cout<<"Factorial of this number is : "<<fact;
}
