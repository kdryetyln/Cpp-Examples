#include <iostream>

using namespace std;
int f(int x, int y)
{
    if(y==0) throw 500;
   return x/y;
}

int main()
{
    int a, b;
    cout << "iki sayi giriniz : ";
    cin>>a>>b;
    try
    {
        cout << f(a,b);
    }
    catch(int i){
    cout<<"hata kodu : "<<i;
    }

    return 0;
}
