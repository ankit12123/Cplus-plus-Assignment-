//Write a program to find the sum of first n natural numbers using a while loop.
#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the n numbers: ";
        cin>>n;

       int a=0;
       int sum=0;
        while(a<=n){
            sum=sum+a;
            a=a+1;
        }
        cout<<"Sum of all n numbers is : "<<sum;
}
