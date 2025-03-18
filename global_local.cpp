#include <iostream>
using namespace std;
int glo = 2;
/*here the global varible used to assine value out side of the local varibal,and
the latest value assine to the local varible */
void sum()
{
    int a;
    cout << glo;
}
int main()
{
    int glo = 9;
     glo = 78;
    cout << glo;
    sum();
    return 0;
}
