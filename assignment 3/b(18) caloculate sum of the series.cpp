//Write a Program in c++ to calculate the sum of the series;
//         (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + ...........+ (n  * n)

#include<iostream>
using namespace std;
int main(){

        int n,x,sum=0;
        cout<<"Enter lats number; ";
        cin>>n;

        for(int i = 1 ; i<=n ;i=i+1){

            x = (i*i);
            sum =  sum + x;
        }
        cout<<"The sum of the series is : "<<sum;


}
