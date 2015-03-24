#include <iostream>

using namespace std;

int main()
{
    // 2 sayi girilsin ve bunlar karþýlaþtýrýlsýn
    int x,y;
    cout << "Birinci sayiyi giriniz :" ;
    cin >> x;
    cout << "Ýkinci sayiyi giriniz :" ;
    cin >> y;
    if(x>y)
    {
        while(x>y)
        {
            cout << "Sayilar esit degil.\n";
            x--;//x i y ye 1 azaltarak eþitlemeye çalýþýyo
            //eþitleme olana kadar her bir eksiltmede ekrana eþit deðil yazdýrýr
        }
        cout << "Sayilar esitlendi.\n";
    }
    else {
            while(y>x)
        {
            cout << "Sayilar esit degil.\n";
            y--;
        }
        cout << "Sayilar esitlendi.\n";
    }
    cout <<"x:"<<x<<endl<<"y:"<<y;
    return 0;
}
