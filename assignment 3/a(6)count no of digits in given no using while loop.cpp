//Write a program to count the number of digits in a given number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n=1;
    int c_ount=0;
    while(n!=0){
        cout<<"Enter many numbers: ";
        cin>>n;
        c_ount=c_ount+1;
    }
    cout<<"Total count of a number is: "<<c_ount<<"\n";

}

