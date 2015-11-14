#include <iostream>

//temel ve turetilmiş siniflarin yapıcılarına argüman yolluyoruz 

using namespace std;

class base
{
    int i;
public:
    base(int n){ cout<<"temel sinifin yapicisi cagirildi."<<endl; i=n; }
    ~base(){ cout<<"temel sinifin yok edicisi cagirildi."<<endl; }
    void showi(){ cout<<i<<endl;}
};
class derived : public base
{
    int j;
public:
    derived(int n) : base(n)//derived a gelen arguman bu yolla temel sinifa gonderilmis oluyor
    {
        cout<<"turetilmis sinifin yapicisi cagirildi."<<endl;
        j=n;
    }
    ~derived()
    {
        cout<<"turetilmis sinifin yok edicisi cagirildi."<<endl;
    }
    void showj(){ cout<<j<<endl;}

};
int main()
{
    derived ob(10);
    ob.showi();
    ob.showj();
    return 0;
}
