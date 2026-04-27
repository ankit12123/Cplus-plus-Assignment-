//WRITE A PROGRAM IN C++ TO FIND THE NUMBERS AND SUM OF ALL INTEGERS BETWEEN 100 AND 200 WHICH ARE DIVISIBLE BY 9.
#include<iostream>
using namespace std;
int main(){
    int sum=0 , c_ount=0;

        for(int i=100 ; i<=200 ; i=i+1){
            if(i%9 == 0){
                cout<<"the all integer between 100 to 200 are : "<<i<<endl;
                c_ount = c_ount +1;
                sum = sum + i;
            }
        }
        cout<<"total numbers which are divisible by 9 is : "<<c_ount<< endl;
        cout<<"Sum of all numbers : "<<sum;


}
