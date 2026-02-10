// Write a program to check whether a character is a vowel or consonant.
#include<iostream>
using namespace std;
int main(){
       char c;
        cout<<"Enter the Character :";
        cin>>c;

        c=tolower(c);

        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            cout<<"This is a vowel : "<<c;
        }
        else{
            cout<<"Consonant : "<<c;
     }

}
