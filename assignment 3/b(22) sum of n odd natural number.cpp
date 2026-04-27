//WRITE A PROGRAM THAT DISPLAYS THE SUM OF N ODD NATURAL NUMBERS.

#include<iostream>
using namespace std;
int main(){
        int n ,sum =0;

        cout<<"Enter the n odd natural number: " ;
        cin>>n;

         for(int i=1 ; i<=n ; i=i+1){
            if (n%2 != 0){
                sum = sum + n;
            }
            else{
                sum = sum + n;
            }

         }
         cout<<"The Sum of first "<<n<<" odd natural numbers : "<<sum;
}
