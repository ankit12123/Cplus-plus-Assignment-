//. Write a program to evaluate the expression:
//(𝑎 +𝑏)2 = 𝑎2 +2𝑎𝑏+𝑏2.

#include<iostream>
using namespace std;
int main(){
        int a,b ,x;

        cout<<"Enter two Numbers a And b : ";
        cin>>a>>b;

        x= (a*a) + (2*a*b) + (b*b);

        cout<<"here the a+b her square is : "<< x;

}
