//Write a program in C++ to find the last prime number that occurs before the entered number.
#include<iostream>
using namespace std;
int main(){
       int num1,num2,i,j,k,temp;
        cout<<"Enter the Range of Prime number: ";
        cin>>num1>>num2;

        for(i=num1;i<num2;i=i+1){
        temp=0;
            for(j=2;j<=i/2;j=j+1){
                if(i%j==0){
                  //  cout<<"Not prime number";
                  temp = temp +1;
                    break;

                }
            }
            if(temp==0){
                for(k=num2; k > num1; k=k-1){

                  cout<<"Prime number"<<i<<endl;
                  break;
            }
        }
            else{
               // cout<<"Prime number"<<i;
            }

            }
        }

