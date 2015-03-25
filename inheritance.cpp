//burada bir temel sinif ve bu siniftan mirasla olusturulmus(public olarak)
//bir turetilmis sinif verilmektedir
#include <iostream>

using namespace std;
//temel sinif
class base
{
    int x;
    public:
        void setx(int n)
        {
            x=n;
        }
        void showx()
        {
            cout << x << '\n';
        }
};
//public türü ile miras
//türetilmis sinif
class derived : public base
{
    int y;
    public :
        void sety(int n)
        {
            y=n;
        }
        void showy()
        {
           cout << y << '\n';
        }
};

int main()
{
    derived ob;

    ob.setx(10); // temel sinifin uyelerine erisiyor
    ob.sety(20); // turetilmis sinifin uyelerine erisiyor

    ob.showx(); // temel sinifin uyelerine erisiyor
    ob.showy(); // turetilmis sinifin uyelerine erisiyor

    return 0;
}
