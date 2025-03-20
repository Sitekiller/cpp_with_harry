#include<iostream>
using namespace std;
int main()
{
    const int a=3;
    a=45;
    cout<<a;/*here using the const the valve of a is not change and the compiler show yhe error*/
    return 0;
}
