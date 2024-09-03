#include<iostream>
using namespace std;
int main()
{
   /* int n;
    int sum = 0;
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        sum = sum +i;
        i = i+1;
    }
    cout<< " value of sum is : "<< sum << endl;
    */

   int n;
   cin>> n;

   int i =2;
   while (i<n){
    if(n%i==0){
        cout<< " Not a prime for "<< endl;
    }
    else{
        cout<< "prime for"<< i << endl;
    }
    i = i+1;
   }
} 