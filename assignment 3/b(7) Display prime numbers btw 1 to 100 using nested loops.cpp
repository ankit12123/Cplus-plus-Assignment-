//Write a program to display all prime numbers between 1 and 100 using nested loops.

#include<iostream>
using namespace std;
int main(){

        //Declare Variable
        int n,i,j,flag;

        for(i=2;i<=10;i=i+1){
            flag=0;

            for(j=2;j<=i/2;j=j+1){
                if(i%j==0){

                    flag=flag+1;
            }
        }
        if(flag==0){
            cout<<endl<<i<<"Prime";
        }else{
            cout<<endl<<i<<"not prime";
        }
    }
}
