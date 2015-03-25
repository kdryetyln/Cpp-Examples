#include <iostream>

using namespace std;

int main()
{
    float x,y;
    int  z;
    cout << "Birinci sayiyi giriniz : ";
    cin >> x;

    cout << "Ikinci sayiyi giriniz : ";
    cin>> y ;

    cout << "- isleminizi seciniz - \n 1-Toplama \n 2-Cikarma \n 3-Carpma \n 4-Bolme \n ";
    cin >> z;

    switch(z)
    {
    case 1 :
        {
            cout << x+y ;
        }
        break;
    case 2 :
        {
            cout << x-y;
        }
        break;
    case 3 :
        {
            cout << x*y;
        }
        break ;
    case 4 :
        {
            cout << x/y;
        }
        break;
    default :
        {
            cout << "Hata!";
        }
        break;
    }
return 0;
}
