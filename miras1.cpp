#include <iostream>

//Temel ve türetilmiş siniflarin yapıci ve yokedicilerin çalışmaları ile ilgili

using namespace std;

class base
{
public:
    base(){ cout<<"temel sinifin yapicisi cagirildi."<<endl; }
    ~base(){ cout<<"temel sinifin yok edicisi cagirildi."<<endl; }
};
class derived : public base
{
    int j;
public:
    derived(int n)
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
    ob.showj();
    return 0;
}
