#include<iostream> 
using namespace std;
int main(){
    float a=455;
    float & y=a;
    cout<<a<<endl<<y;/*here the value of a given  by also y* and this is also called call by refernce */
        return 0;
}