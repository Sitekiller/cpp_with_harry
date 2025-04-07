#include<iostream>
using namespace std;
void swap(int x,int y){
    int c=x;
    x=y;
    y=c;
}
void swap_pointer(int*a,int*b){
    int c=*a;
    *a=*b;
    *b=c;
}
void swap_cpp(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
int main(){
int a=3,b=15;
cout<<"before swap"<<a <<b;
swap(a,b);
cout<<"after swap   "<<a <<b <<endl;
swap_pointer(&a,&b);
cout<<"after swap using pointer  "<<a <<b <<endl;
swap_cpp(a,b);
cout<<"after swap using refernce variable  "<<a <<b <<endl;

return 0 ;
}