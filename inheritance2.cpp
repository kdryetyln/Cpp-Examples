// çoklu miras
#include <iostream>

using namespace std;

class b1
{
    int a;
public:
    b1(int x){ a= x; }
    int geta() { return a; }
};
// temel sýnýftan doðrudan oluþturuluyor.
class d1 : public b1
{
    int b;
public:
    d1(int x, int y): b1(y) // y, b1 e gönderiliyor
    {
        b = x;
    }
    int getb () {return b ; }
};
// bir türetilmiþ sýnýftan ve bir indirekt temel sýnýftan sýnýf oluþturuluyor
class d2 : public d1
{
    int c;
public:
    d2(int x, int y, int z) : d1 (y, z)// argümanlar d1 e aktarýlýyor
    {
        c = x;
    }
// temel sýnýflardan miras public olarak gerçekleþtirildiðinden , d2, hem b1 in hemde d1 in public elemanlarýna eriþebilir
void show()
{
    cout << geta() << ' ' << getb() << ' ';
    cout << c << '\n';
}
};
int main()
{
    d2 ob (1, 2, 3);
    ob.show();
//geta() ve getb() fonksiyonlarý burada hala public
    cout << ob.geta() << ' ' << ob.getb() << '\n';
    return 0;
}
