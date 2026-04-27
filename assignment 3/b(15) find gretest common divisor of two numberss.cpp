//Write a program in c++ to find the greatest common divisor(GCD) of two numbers.
#include<iostream>
using namespace std;
int main(){

        int num1,num2,n,i,x,gcd=1,k;

        //Taking input
        cout<<"Enter two numbers";
        cin>>num1>>num2;

            //Apply loop for calculate the divisors of first number
            for(n=1; n <= num1 ; n=n+1){
                if(num1 % n == 0){
                    cout<<"This first number  divisor is:"<<n<<"\n";


                }


            //Apply loop for calculate the divisors of second number
            for(i=1; i <= num2 ; i=i+1){
                if(num2 % i == 0){
                    cout<<"This second number  divisor is:"<<i<<"\n";

                }


            }


            for(int x=1 ; x <=num1 && x <=num2 ; x=x+1){   //Apply loop to find greatest coommon factor with both num1 and num2 range
                if(num1 % x == 0 && num2 % x == 0){
                cout<<"Common divisors are : "<<x<<endl;// if both numbers are divisible by x and her remainder is zero(0) then they are common divisors
                    gcd = x;                            //assign value of x in gcd

                }

            }
            //final Output
            cout<<"The Greatest common divisor(GCD) of two numbers is :  :"<<gcd;

  }


