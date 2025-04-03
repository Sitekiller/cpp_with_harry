#include<iostream>
using namespace std;
struct student
{
    /* data */
    int roll_no;
    char name;
    float marks;
};

int main(){
struct student suyash;
suyash.roll_no=260;
suyash.name ='h';
suyash.marks =33.4;
cout<<suyash.marks<<endl;
cout<<suyash.roll_no<<endl;
cout<<suyash.name<<endl;

return 0 ;
}