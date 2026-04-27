// Write a program to print the following pattern.
//              *
//              *  *
//              *  *  *
//              *  *  *  *
//              *  *  *  *  *
#include<iostream>
using namespace std;
int main(){

        for (int i=0; i<5 ; i= i-1){
                for(int j=i ; j=5-i; j=j+1){
            cout<<"*";
            cout<<"\n";

        }

    }
}

