//Write a program to reverse a given number using a  while loop.
#include<iostream>
using namespace std;
int main(){
        int n,rev=0,last,orignal;

        cout<<"Enter The  number : ";
        cin>>n;
         orignal=n;

        while(n!=0){
            last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        cout<<"Your Original Number is :"<<orignal<<"\n";
        cout<<"Your Reversed Number is :"<<rev<<"\n";
}
