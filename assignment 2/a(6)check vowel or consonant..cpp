//Write a program to check whether a character is a vowel or consonant.
#include<iostream>
using namespace std;
int main(){
        char c;
        cout<<"Enter the character between a to z:";
        cin>>c;

        c=tolower(c);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cout<<"Alphabets are Vowels: "<<c;
        }

        else{
            cout<<" Alphabets are consonant: "<<c;
        }
}


