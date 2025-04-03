#include<iostream>
using namespace std;
int main(){

int marks[4]={23,22,34,45};
int* p= marks;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;//array in pointer
cout<<marks[3]<<endl;
cout<<*p<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;

return 0 ;
}//array is the collaction of same data type