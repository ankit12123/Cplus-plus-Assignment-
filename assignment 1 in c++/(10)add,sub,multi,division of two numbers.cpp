//Write a program to perform addition, subtraction, multiplication,and division of two numbers.
#include<iostream>
using namespace std;
int main(){
        int a,b,sum,sub,product,div;

        cout<<"Enter the Two Numbers :";
        cin>>a>>b;

        sum=a+b;
        sub=a-b;
        product=a*b;
        div=a/b;

        cout<<"The Addition Of two Number is: "<<sum;
        cout<<" \n The Subtraction Of two Number is: "<<sub;
        cout<<" \n The Multiplication Of two Number is: "<<product;
        cout<<" \n The Division Of two Number is: "<<div;


}
