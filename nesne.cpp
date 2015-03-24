#include <iostream>

using namespace std;
class samp
{
    int i;
public:
    samp(int n)
    {
        i=n;
        cout<<"olusturuluyor ..."<<endl;
    }
    ~samp()
    {
        cout<<"yok ediliyor ..."<<endl;

    }
    int goster()
        {
            return i;
        }
};
int kopya(samp j)//kopya burada olusturulmus oldu
{
    return j.goster()*j.goster();
}
int main()
{
   samp a(10);
   cout << kopya(a) << endl;
    return 0;
}






