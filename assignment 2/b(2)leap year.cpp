//Write a program to check whether a given number is a leap year.
#include<iostream>
using namespace std;
int main(){
        int y;

        cout<<"Enter The Year:";
        cin>>y;

        if(y%4==0){
            if(y%100==0){
                if(y%400==0){
                    cout<<"Leap year";
                }
                else{
                    cout<<"Not leap year";
                }
            }else{
            cout<<" leap year" ;
            }
        }else{
        cout<<"Not leap year";
        }
}

