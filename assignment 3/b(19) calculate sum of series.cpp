//Write a program in c++ to calculate the sum of the series:
//      (1) + (1+2) + (1+2+3) + (1+2+3+4) + ......+(1+2+3+4+....n)

#include<iostream>
using namespace std;
int main(){
        int n,sum;
        cout<<"Enter last number:";
        cin>>n;

        for(int i=1;  i<=n; i=i+1){
            sum  =  sum + i;

        }
        cout<<"Sum of the series : " << sum;


}
