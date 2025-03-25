#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"enter your age\n ";
    cin>>age;
    if (age>18&&age<60)
    {
      cout <<"you can come to the party\n";

    }
    else if (age>60)
    {
        cout<<"uncle aap retire ho chuke ho\n";
    }else
    {
        cout <<"chup chap ghar bet\n";
    }
      cout<<age;
    
    return 0;
}