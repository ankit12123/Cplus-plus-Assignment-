// Write a program to convert temperature from Celsius to Fahrenheit.
#include<iostream>
using namespace std;
int main(){
        float celsius,Fahrenheit;

        cout<<"Enter temp in celsius: ";
        cin>>celsius;

        Fahrenheit= (9/5 * celsius) + 32;

        cout<<"Temperature in Fahrenheit is : "<<Fahrenheit;

        return 0;
}

