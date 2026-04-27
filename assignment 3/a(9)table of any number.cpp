//Write a program C++ to display the multiplication table of a given number.
#include<iostream>
using namespace std;
int main(){
        int a,b,c;
        cout<<"Enter Any Number : ";
        cin>>a;
        //Using while loop
        b=1;
        while(b<=10){
            c=a*b;
            cout<<"Table is : "<<c<<"\n";
            b=b+1;
        }
}
