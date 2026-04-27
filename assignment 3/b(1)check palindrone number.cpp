//Write a program to check whether a given number is a palindrome using a loop.
#include<iostream>
using namespace std;
int main(){
        int n,last,rev=0,org;

        cout<<"Enter any number:";
        cin>>n;

        org=n;

        while(n!=0){
            last=n%10;
            rev=rev*10 +last;
            n=n/10;
        }
        cout<<"Original number is: "<<org<<"\n";
        cout<<"Reversed number is : "<<rev<<"\n";
        if(org==rev){
            cout<<"It Is a palindrome number :"<<rev<<"\n";

        }
        else{
            cout<<"not palindrome number:"<<rev;
        }

}
