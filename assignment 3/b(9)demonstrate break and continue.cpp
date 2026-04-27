//Write a program to  demonstrate the use of break and continue statements.
#include<iostream>
using namespace std;
int main(){
        int i,j;
        for(i=0;i<=10;i=i+1){
            cout<<"Continue statement:"<<i<<endl;   //continue statement fir se loop ko cahla diya(next iteration pe)
            continue;

        }
        for(j=0;j<=10;j=j+1){
            cout<<"Break statement :"<<j<<endl;   // loop se pura bahar nikal diya (exit from the loop)
            break;
        }

        //or
      //  int n;
      //  cout<<"Enter the number";
      //  cin>>n;

       // for(int k=0;k<=n;k=k+1){
        //    if(k%2==0){
           //     cout<<"Even number"<<k<<endl;
          //          continue;
          //  }
          //  else{
           //        cout<<"odd number"<<k;
            //        break;

           // }
       // }




}
