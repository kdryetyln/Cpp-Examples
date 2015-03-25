#include <iostream>
#include <cstring>

using namespace std;
template <class X> int find(X object, X *list, int size)
{
    int i;
    for(i=0;i<size;i++)
        if(object == list[i]) return i;
    return -1;
}
int main()
{
    int a[]={1, 2, 3, 4, 5};
    char *c= "Bu bir denemedir.";
    double d[]={1.1, 2.2, 3.3};
    cout<<find(3, a, 4)<<endl;
    cout << find('B', c, (int) strlen(c))<<endl;
    cout<<find(0.0, d, 3);
    return 0;
}
// simdi burada cout find dedikten sonra icine yazdigimiiz degerler sýrasýyla
// aranacak parametre
// parametrenin veri tipinin ait olduðu fonksiyon ismi
// daha sonra o fonksiyonundizideki eleman sayýsý
// eleman sayýsýný atiyorum ilkinde 2 yazar ve aranacak argümaný 5 yazarsak -1 döndürür
// çünkü yalnýzca 0 1 2 indekslerini arar halbuki 5 o diziye dahil
// o neden le dizinin size ýný yazarken az yazmamalýyýz fazla yazsak bi problem teþkil etmez
// ancak anlaþýlabilir olmasý açýsýndan eþit yazmak en mantýklýsý
