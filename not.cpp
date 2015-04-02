#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int notu, a=0, b=0, c=0, d=0, f=0;
    cout<<"Ogrencilerin notlarini giriniz(cikis icin -1) : \n";
    while(notu !=-1)
    {
        cin>>notu;
        if(notu>=0&&notu<=100)
        {

        if(notu>=90)
            a++;
        else if(notu>=80)
            b++;
        else if(notu>=70)
            c++;
        else if(notu>=60)
            d++;
        else if(notu<=60)
            f++;
        }
        else if ( notu < -1 || notu > 100 )
            cout << "Girmis oldugunuz not gecersizdir .";
    }

    cout<<a<<" tane ogrenci A notunu aldi.\n"
    <<b<<" tane ogrenci B notunu aldi.\n"
    <<c<<" tane ogrenci C notunu aldi.\n"
    <<d<<" tane ogrenci D notunu aldi.\n"
    <<f<<" tane ogrenci F notunu aldi.\n";
    return 0;
}
