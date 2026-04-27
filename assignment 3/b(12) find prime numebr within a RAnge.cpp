//Write a program in C++ to find a prime number within a range.
#include<iostream>
using namespace std;
int main(){
        int num1,num2,i,j,temp=0;
        cout<<"Enter the Range of Prime number: ";
        cin>>num1>>num2;

        for(i=num1;i<=num2;i=i+1){
            for( j=2;j<=i/2;j=j+1){
                if(i%j==0){
                        temp=temp+1;
                   // cout<<"Not a prime number"<<i<<endl;
                   break;

                }
            }    // end the nested loop
            if( j >= i/2 ){
                cout<<endl<<i<<"Prime number";
            }

        }
}
