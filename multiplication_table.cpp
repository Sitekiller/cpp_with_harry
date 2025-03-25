#include<iostream>
using namespace std;
int main(){
     //print no between 1 to 10
     int i=1,num;
     cout<<"enter the no who's table want"<<endl;
     cin>>num;
     cout<<"your multiply table is"<<endl;
     do
     {
        cout<<i*num<<endl;
        i++;
     } while (i<11);
     
     //in do  while loop code execute alest one time 
    return 0;
}