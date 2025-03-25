#include<iostream>
using namespace std;
int main(){

//the break statement stop the loop
//the continue statement skip the step
for (int i = 0; i < 10; i++)
{
    /* code */
    
    if (i==2)
    {
        /* code */
        continue;
    }
    cout<<i<<endl;    

    if (i==8)
    {
        /* code */
   break;    
    }
    
    
}

return 0 ;
}