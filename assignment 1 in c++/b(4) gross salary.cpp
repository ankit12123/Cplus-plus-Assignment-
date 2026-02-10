// Write a program to calculate gross salary using basic salary and allowances.
//Gross Salary = BS +HRA +DA + OtherAllowances ,,where house rent allowances is 20% of basic salary,
// and dearness allowances is 40% of basic salary. assumes other allowances is 10% of basic salary.

#include<iostream>
using namespace std;

int main(){
        int bs,hra,da,oa,gs;

        cout<<"Enter the Basic Salary : " ;
        cin>>bs;

        hra= (bs*20)/100;
        da= (bs*40)/100;
        oa= (bs*10)/100;

        gs= bs + hra + da + oa;

        cout<<"The Total Gross Salary is : " <<gs;
}
