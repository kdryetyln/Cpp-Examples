#include <iostream>

using namespace std;
int stroot(int a)
{
    return a*a;
}
double stroot(double a)
{
    return a*a;
}
long stroot(long a)
{
    return a*a;
}

int main()
{
    cout << "5.00 in karesi   : " << stroot(5.00)<<endl;
    cout << "9 un karesi      : " << stroot(9) << endl;
    cout << "220 nin karesi   : " << stroot(220L) << endl;
    cout << "990 nýn karesi   : " << stroot(990L)<<endl;
    cout << "32.00 nin karesi : " << stroot(32.00) << endl;
    cout << "10 un karesi     : " << stroot(10) << endl;
    return 0;
}
