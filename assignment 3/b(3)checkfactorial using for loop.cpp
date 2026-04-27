//write a program to find factorial of a number using for loop.
#include<iostream>
using namespace std;

int main(){

    int n,factorial=1; // Initializing value at 1 bcz start multiplication at one 1 .

    //taking input
    cout<<"Enter Number :";
    cin>>n;

    //Using for loop
    for(int i=1;i<=n;i=i+1){

        factorial= factorial*i;  //formula  ( 5!=5*4*3*2*1).
    }
    cout<<"Factorial of a number is :"<<factorial;
}
