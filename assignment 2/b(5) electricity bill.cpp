//Write a program to calculate electricity bill based on unit consumption using else if ladder(step by step).
//First 50=1.50;
//next 100=2.50;
//next 100=4.00;
//above 250=6.00;
#include<iostream>
using namespace std;
int main(){
        float unit,E_bill;

        cout<<"Enter the Unit: ";
       cin>>unit;

       if(unit<=50){
        E_bill=unit*1.50;
       }
       else if(unit>50 && unit<=150){
        E_bill=50*1.50 +(unit-50)*2.50;
       }
       else if(unit>150 && unit<=250){
        E_bill= 50*1.50 + 100*2.50 + (unit-150)*4.00;
       }
       else {
        E_bill=50*1.50 +100*2.50 + 100*4.00 + (unit-250)*6.00 ;
       }
       cout<<" Total Bill is: "<<E_bill;


}
