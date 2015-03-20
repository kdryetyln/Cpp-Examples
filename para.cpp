#include <iostream>
#include <conio.h>

using namespace std;

//bizden bir miktar istensin. bu miktar 20 10 ve 5 lik birimlere bölünsün ve herbirinin sayisini göstersin
void banka (int para)//void kullanýyosak returnsuz yapmalýyýz çünkü biþey döndermicez
{
    int a, yirmi, on, bes;
    a=para;
    if(a%5==0)
    {
        yirmi=a/20;
        a=a-yirmi*20;

        on=a/10;
        a=a-on*10;

        bes=a/5;
        a=a-bes/5;

        cout << "Yirmilik : " << yirmi << endl ;
        cout << "Onluk : " << on << endl ;
        cout << "Beslik : " << bes << endl ;
    }
    else
        cout<< "Girilen miktar 5 tl ve katlari olmalidir. ";
}
int main()
{
    int miktar ;
    cout << "Para miktarini giriniz : " << endl;
    cin >> miktar ;

    banka(miktar);

    getch();
    return 0;
}
