#include<iostream>
using namespace std;
int main(){
    int lr,sr;
    cout<<"\nwelcome to cleaning service";
    cout<<"\nno of small room";
    cin>>sr;
    cout<<"\nno of large room";
    cin>>lr;
    cout<<"\nexitimate for service";
    cout<<"\nprice for small 25$\n price for large room 35$";
    cout<<"\ncost is "<<25*sr+35*lr;
    cout<<"\ntax is "<<0.06* (25*sr+35*lr);
    cout<<"\ntotal is "<<25*sr+35*lr+0.06* (25*sr+35*lr);
    return 0;
}