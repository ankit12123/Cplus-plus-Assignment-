//Write a program to input marks of three subjects and calculate total and percentage.
#include<iostream>
using namespace std;
int main(){
        int m1,m2,m3,total,per;
        cout<<"Enter the marks of three subjects :";
        cin>>m1>>m2>>m3;

        total=m1+m2+m3;

        per=total/3;

        cout<<"Total Marks of three subject is : "<< total  <<"\n " ;
        cout<<"Total percentage of three subject is :  "<<per <<"%";


}

