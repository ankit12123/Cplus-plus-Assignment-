//Write a program to find the third angle of a triangle using the formula:
//Third Angle = 180◦ − (First Angle + Second Angle).
#include<iostream>
using namespace std;
int main(){
        int ang1,ang2,ang3;
        cout<<"Enter the First and Second Angle : ";
        cin>>ang1>>ang2;

        int sum=ang1+ang2;
        ang3=180-sum;

        cout<<"The Third Angle of Triangle is :"<<ang3;
}
