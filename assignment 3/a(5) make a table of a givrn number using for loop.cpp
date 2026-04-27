//Write a program to display the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main(){
        int a,b,c;

        //Taking input
        cout<<"Enter number for table:";
        cin>>a;

        //Applying for loop
        for(int b=1;b<=10;b=b+1){
            c=a*b;
            cout<<"Table of "<<a<<" is : "<<c<<"\n";
        }


}
