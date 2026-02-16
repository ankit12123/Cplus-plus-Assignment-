//Write a program to check whether a person is eligible to vote.
#include<iostream>
using namespace std;
int main(){
        int age;
        cout<<"Enter the age:";
        cin>>age;

        if(age>=18){
            cout<<" Eligible for vote: "<<age;
        }

        else{
            cout<<"Not Eligible for vote : "<<age;
        }
}


