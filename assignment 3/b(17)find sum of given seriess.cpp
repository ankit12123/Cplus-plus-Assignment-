//write a program in c++to find the sum of the following series .
//              1 + 1/2^2   + 1/3^3 + .......... 1/n^n;

#include<iostream>
#include<cmath>
using namespace std;
int main(){
      float n,sum=0,x;

      cout<<"Enter the number";
      cin>>n;

      for(int i= 1; i<=n ;i=i+1)
      {
          x = 1 / pow(i,i);
          sum = sum + x;
      }
      cout<<"sum=="<<sum;




}


