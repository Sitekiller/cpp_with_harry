#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<<"tell me your age ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18 years old";
        break;
    //break statement used to break the loop 
    case 19:
        cout<<"you are 19 years old";
        break;
    
    case 20:
        cout<<"you are 20 years old";
        break;
    
    default:
    cout<<"no spacial age";
        break;
    }
    return 0;
}