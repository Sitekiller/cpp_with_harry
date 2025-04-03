#include<iostream>
using namespace std;
int main(){

int a=3;
int* b=&a;
cout<<b<<endl;
cout<<*b;

//here the address of a are store in b 
//& use to show address and *use for value of varible 

return 0 ;
}