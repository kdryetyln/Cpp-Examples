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
    toplama operator=(toplama);
    toplama operator-(toplama);
    toplama operator+(int m);
};

toplama toplama::operator+(int m)
{
    toplama gecici;
    gecici.x=x+m;
    gecici.y=y+m;
    return gecici;
}

toplama::toplama(int a,int b)
{
    x=a; y=b;
}
toplama toplama::operator+(toplama sayi)
{
    toplama gecici;
    gecici.x=x+sayi.x;
    gecici.y=y+sayi.y;
    return gecici;
}
toplama toplama::operator-(toplama sayi)
{
    toplama gecici;
    gecici.x=x-sayi.x;
    gecici.y=y-sayi.y;
    return gecici;
}
toplama toplama::operator=(toplama sayi)
{
    x=sayi.x;
    y=sayi.y;
    return *this;
}
int main()
{
    toplama a(19,23);
    toplama b(5,4);
    toplama c;
    c=a+b;//2 nesneyi topladik.  + isleci operator+ yı cagirdi
    cout << "1. sayi : "<<c.x<<"    2. sayi : "<<c.y<<endl<<endl;
    c=a-b;//2nesneyi cikardik . - isleci operator- yi cagirdi
    cout << "1. sayi : "<<c.x<<"    2. sayi : "<<c.y<<endl<<endl;
    c=a;//c ye a nesnesini esitledik.  = operatoru  operator= i cagirdi
    cout << "1. sayi : "<<c.x<<"    2. sayi : "<<c.y<<endl<<endl;
    c=b;//c ye a nesnesini esitledik.  = operatoru  operator= i cagirdi
    cout << "1. sayi : "<<c.x<<"     2. sayi : "<<c.y<<endl<<endl;
    c=a+10;//buradaki + islecide operator+(int m ) i bize cagiracaktir
    cout << "1. sayi : "<<c.x<<"    2. sayi : "<<c.y<<endl<<endl;
    c=b+25;//buradaki + islecide operator+(int m ) i bize cagiracaktir
    cout << "1. sayi : "<<c.x<<"    2. sayi : "<<c.y<<endl<<endl;
    return 0;
}
