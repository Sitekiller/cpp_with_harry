#include<iostream>
using namespace std;
//function call function it seelf
int factorial(int n){
    if (n<=1)
    {
        /* code */
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
cout<<"enter a number";
cin>>n;
cout<<factorial(n);
return 0 ;
}