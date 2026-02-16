//Write a Program to determine whether a triangle is equilateral,isosceles or scalene using nested if statements.
#include<iostream>
using namespace std;
int main(){
        int side1,side2,side3;
        cout<<"Enter the sides of a triangle:";
        cin>>side1>>side2>>side3;

        if(side1==side2){
           if( side1==side3){
            cout<<"Equilateral Triangle all sides are same ";
           }else{
           cout<<"Isosceles Triangle because two sides are equal:";
           }

        }
        else if(side1==side2||side2==side3||side1==side3){
           cout<<"Isosceles Triangle because two sides are equal:";
            }
        else{
        cout<<"Scalene triangle because all sides are different";
        }

}
