//Write a program to print the following pattern using nested loops:
//                      *
//                  *       *
//              *               *


#include<iostream>
using namespace std;
int main(){
        int i,j;

        for(i=0;i<=2;i=i+1){
            for(j=0; j<=2;j=j+1){
                cout<<"*";
            }
        }
}
