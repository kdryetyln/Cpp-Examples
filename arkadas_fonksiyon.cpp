#include <iostream>

using namespace std;
class sinif
{
    int n,d;
public:
    sinif(int i, int j){n=i; d=j;}
    friend int kati(sinif ob);//friend+donnus tipi+herhangi bir fonksiyon ismi(sinýfýn ismi
};
int kati(sinif ob)
{
    if(!(ob.n%ob.d)) return 1 ;
    else return 0;
}

int main()
{
    sinif ob1(10, 2), ob2(13,3);
    if(kati(ob1)) cout<<"10, 2 nin katidir."<<endl;
    else cout << "10, 2 nin kati degildir."<<endl;
    if(kati(ob2)) cout<<"13, 3 un katidir."<<endl;
    else cout << "13, 3 un degildir."<<endl;

    return 0;
}
