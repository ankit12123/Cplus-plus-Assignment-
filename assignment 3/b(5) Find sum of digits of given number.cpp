// Write a program to find the sum of digits of a given number using a loop.
#include<iostream>
using namespace std;
int main(){
        int n ,last,sum=0;

        cout<<"Enter the digits:";
        cin>>n;

        for( ;n!=0;){
            last=n%10;
            sum=sum+last;

            n=n/10;
        }
        cout<<"Total sum of digits are: "<<sum;


}
