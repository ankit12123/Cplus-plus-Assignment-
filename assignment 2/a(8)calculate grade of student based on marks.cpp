//Write a program to calculate the grade of a student based on marks
#include<iostream>
using namespace std;
int main(){
        int marks;
        cout<<"Enter the marks of student:";
        cin>>marks;

        if(marks<=100){
        if(marks>=60){
            cout<<"First Division: A :  "<<marks;
        }
        else if(marks>=50){
            cout<<"Second Division: B :  "<<marks;
        }
        else if(marks>=33){
            cout<<"Third Division: C :  "<<marks;
        }
        else{
            cout<<"Fail : "<<marks;
        }
    }
    else{
        cout<<"Invalid marks you entered.";
    }
}



