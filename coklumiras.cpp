#include <iostream>

//COKLU MIRAS

using namespace std;

class temel
{
    int x;
public:
    temel(int m)
    {
        x=m;
    }
    int getx()
    {
        return x;
    }
};
class turetilmis1 : public temel // temel sinifindan dogrudan turetilmis sinif olusturduk
{
    int y;
public:
    turetilmis1(int a, int b) : temel(b) // b degiskeni temel sinifina gonderiliyor
    {
        y=a;
    }
    int gety()
    {
        return y;
    }
};
class turetilmis2 : public turetilmis1 //hem bir turetilmis sinifdan hem de bir temel sinifdan farkli bir turetilmis sinif olusturduk
//boylelikle turetilmis2 sinifi hem turetilmis1 sinifinin hemde temel sinifin public uyelerine erisebilecek
{
    int z;
public:
    turetilmis2(int a, int b, int c) : turetilmis1(b,c)
    {
        z=a;
    }
    void show()
    {
        cout<<getx()<<' '<<gety()<<' ';
        cout<<z<<endl<<endl;
    }
};

int main()
{
    turetilmis2 t2(1,3,5);
    t2.show();
    cout<<t2.getx()<<' '<<t2.gety()<<' ';//getx ve gety fonksiyonlari burada hala public durumda
    return 0;
}
