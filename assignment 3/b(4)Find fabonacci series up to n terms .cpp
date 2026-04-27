// Write a program to generate the fibonacci series up to n terms using a loop.
#include<iostream>
using namespace std;
int main(){
        //Declaring variable
        int n;

        //taking input
        cout<<"Enter Number :";
        cin>>n;

        //initialize value 0 and 1 and add to store in next_term.
        int num1=0,num2=1 ,next_term;

        //apply for lop for n terms series
        for(int i=0;i<=n;i=i+1){

        //Output numbers in first(0) to last(n) inside the loop.
        cout<<"Fibonacci numbers are  :"<<num1<<"\n";

            next_term = num1 + num2; //add 0 and 1 and store in next_term.
            num1=num2;  //now re-assign the first value  with second value

            num2=next_term; //re=assign second value into next_term value.
        }

}
