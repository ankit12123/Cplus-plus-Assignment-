//Write a c++ program that asks the user to enter positive integers one by one to
// Compute the COUNT , MAXIMIUM, MINIMUM , and  AVERAGE of the numbers you entered.
// The program should terminate when the user enters -1.
#include<iostream>
using namespace std;
int main(){


        //Declaring variable
       int n,i,c_ount=0,sum=0, avg,x, maxx, minn;

        //Taking input of 1st time
       cout<<"Enter a number";
        cin>>n;

            //checking if 1st number is not -1
            if (n==-1){
                cout<<"error";
            }


        //For maximum and minimum are same.
        maxx = minn = n;

        //Again Apply loop for calculate terms
       while(n != -1){

            //For count the number of elements where count initialize with zero
            c_ount  = c_ount + 1;

            //calculate sum for To find average where sum initialize with zero
            sum = sum + n;

            //for maximunm
            if(n > maxx){
                maxx = n;
            }
            //for minimum
            if(n < minn){
                minn = n;
            }

            // Again Taking input
            cout<<"Enter a number";
            cin>>n;


       }

       //Re-assigning value of count
        x=c_ount;

        //calculate the average if numbers.
        avg = sum / x;




        //Output
       cout<<"Count is : "<<c_ount<<endl;
       cout<<"Maximum is : "<<maxx<<endl;
       cout<<"Minimum  is : "<<minn<<endl;
       cout<<"Average is : "<<avg<<endl;
       return 0;

}
