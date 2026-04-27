//Write a program to calculate the sum of  the following series
//                  1+2+3+............+ n;

#include<iostream>
using namespace std;
int main(){
        int n,sum=0;
        cout<<"Enter the last number of the series";
        cin>>n;

        for(int i=1;i<=n;i=i+1){

            sum=sum+i;

        }
        cout<<"The sum of the series is : "<<sum;


}
