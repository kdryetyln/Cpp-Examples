#include <iostream>
//dinamik olarak bir nesne dizisi icin yer ayiran bir program

using namespace std;

class dizi
{
    int x;
public:
    dizi(){ x=0; };//hazirlayici yok
    dizi(int a) //hazirlayici var yani yapici fonksiyon tanimlandi
    {
        x=a;
    }
    //yukarida yapici fonksiyonlari asiri yuklemis olduk
    int getx()
    {
        return x;
    }
    void setx(int b)
    {
        x=b;
    }
};

int main()
{
    dizi *d1;
    dizi d2(10);//nesneye direk buradan deger atadik
    d1=new dizi[10];//burada yapicilarş kullanilamaz
    if(!d1)
        cout<<"d1 nesnesi icin bellekte yer ayrilamadi...!";

    int i;
    //butun elemanlari d2 olarak ayarliyoruz yani 10
    for(i=0;i<10;i++)  d1[i]=d2;
    for(i=0;i<10;i++)
    {
        cout<<"d1["<<i<<"]:"<<d1[i].getx()<<endl;
    }
    return 0;
}
