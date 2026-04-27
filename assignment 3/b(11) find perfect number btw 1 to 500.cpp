//Write a program in c++ to find the perfect numbers between 1 to 500;
#include<iostream>
using namespace std;
int main(){
        int i,j,n,sum;

        for(i=1 ;i<=500;i=i+1){
         sum=0;

            for( j=1;j<=i/2 ; j=j+1){

            if(i%j==0){
                sum=sum+j;
                continue;
            }
          }
         // cout<<" original Number is:  "<<i;
    //cout<<"  sum is: "<<sum;

     if(i==sum){
        cout<<"  perfect numbers are :  "<<i<<endl;
    }
    //else{
   //     cout<<"  Not perfect number:"<<i<<endl;
    //}


 }

}

