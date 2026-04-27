//Write a program to Check whether a given number is an Armstrong number using a loop.
#include<iostream>
#include<cmath> // Using for for loop
using namespace std;



int main(){

        //Declaring Variable
        int n,last,c_ount=0,power,sum=0;

        //Taking input from user
        cout<<"Enter any number:";
        cin>>n;

        // Re-assigning value bcz n is change in count time hemnce for power we use orig_num value to calculate power and sum.
         int orig_num=n;

         //Again Re-assigning value because original_number is not process any time hence value of n is finally store in this variable.
         int original_number=n;

        //calculating the How many Digits
        while(n!=0){
            last=n%10;
            c_ount=c_ount+1;
            n=n/10;
        }

        //Re-assigning value of count into p.
      //  int p=c_ount;

   //   cout<<""<<p<<"\n";


        // Calculating sum and power of digits

        while( orig_num!=0){
            last = orig_num % 10; // remainder


          power = pow(last,c_ount); //find power using cmath header file
            sum = sum + power;      //calculate sum of digits
            orig_num = orig_num / 10;  //Quotient (remaining digits)

    //comparing values original and after sum.
        }
    if(original_number==sum){
        cout<<"It is a Armstrong number : "<<sum<<"\n";
    }
    else{
         cout<<"It is  NOT a Armstrong number : "<<sum<<"\n";
    }



}
