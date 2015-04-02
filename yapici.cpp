#include <iostream>

using namespace std;
class myclass
{
    int x;
public://iki yolla yapýlandýrýcýyý asýrý yukle
    myclass(){x=0;}//hazýrlayýcý var
    myclass(int n){x=n;}//hazýrlayýcý yok
    int getx(){return x;}//hazýlayýcý var
    void setx(int n){x=n;}
};
int main()
{
    myclass *p;
    myclass ob(10);//tek degiskeni hazirla

    p=new myclass[10];//burada hazirlayicilar kullanýlamaz
    if(!p)
    {
        cout << "Allocation ERROR !\n";
        return 1;
    }
    int i;
    //butun elemanlarý ob a ayarla
    for(i=0;i<10;i++) p[i] = ob;
    for(i=0;i<10;i++)
    {
        cout <<"p["<<i<<"]:"<<p[i].getx();
        cout << '\n';
    }
    return 0;
}
