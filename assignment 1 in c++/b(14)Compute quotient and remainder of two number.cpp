//Write a C++ program to compute the quotient and remainder of two integers
#include<iostream>
using namespace std;
int main(){
        int a,b,q,r;

        cout<<"Enter the First and Second Integer : ";
        cin>>a>>b;

        // For Quotient
        q=a/b;
        //for remainder
        r=a%b;

        cout<<"Quotient is :"<<q;
        cout<<"\n Remainder is : "<<r;

}
