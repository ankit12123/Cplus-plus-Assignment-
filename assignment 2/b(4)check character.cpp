//Write a program to check whether a character is an uppercase letter,lowercase letter,letter,digit,or special character.
#include<iostream>
using namespace std;
int main(){
       char cha;

       cout<<"Enter any character: ";
       cin>>cha;

       if(cha>='A' && cha <='Z'){
        cout<<"Uppercase letter";
       }
       else if(cha>='a' && cha<='z'){
        cout<<"Lowercase letter";
       }
       else if(cha>='1' && cha<='9'){
        cout<<"Digits";
       }
       else{
        cout<<"Special Character";
       }
}
