#include <iostream>

using namespace std;

class toplama
{
public:
    int x,y;
    toplama()
    {
        x=0; y=0;
    }
    toplama(int,int);
    toplama operator+(toplama);
};
toplama::toplama(int a,int b)
{
    x=a; y=b;
}
toplama toplama::operator+(toplama koord)
{
    toplama gecici;
    gecici.x=x+koord.x;
    gecici.y=y+koord.y;
    return gecici;
}

int main()
{
    toplama a(19,23);
    toplama b(5,4);
    toplama c;
    c=a+b;//2 nesneyi topladik.  + isleci operator+ yı cagirdi
    cout << "1. sayi : "<<c.x<<endl<<"2. sayi : "<<c.y;
    return 0;
}
