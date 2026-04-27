//Write a program to check whether a given number is a prime number using a loop.
#include<iostream>
using namespace std;
int main(){

        //Declare Variable
        int n,i;

        //taking input
        cout<<"Enter number:";
        cin>>n;

        //Re-assigning value
        int realnum=n;

        //Applying loop

        for(i=2;i<=n/2;i=i+1){   //loop runs half of the number you get
            if(n%i==0){           //number is divisible by i

                cout<<" Not Prime number";
                return 0;   // We use this Because program should be over. whenever this condition is wrong it does not work.
            }

    }
        cout<<" Prime Number" ;  // When if statement is wrong then this line should be executed.


        //WRONG APPROACH
      //  if(n/i==realnum  && n%realnum==0 && n%2!=0 && n%3!=0 && n%5!=0 ){

       //         cout<<"It is  prime number:" <<n<<"\n";


        //    }
         //   else{
         //       cout<<"Not prime"<<n;
           // }
}
