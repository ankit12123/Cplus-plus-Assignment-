//Write a program to calculate the area and circumference of a circle using the following formulae:
//Area of Circle = 𝜋𝑟2.
//Circumference of Circle = 2𝜋r. where pi=3.14159.

#include<iostream>
using namespace std;
int  main(){
        int r;
        float pi=3.14159,area,circumference;

        cout<<"Enter the radius of the Circle : ";
        cin>>r;

        area=pi*r*r;
        circumference=2*pi*r;

        cout<<"Area of Circle is : "<<area;
        cout<<"\n Circumference of Circle is : "<<circumference;
}

