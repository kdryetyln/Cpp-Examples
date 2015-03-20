#include <iostream>

using namespace std;

main()
{
    int dizi[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout << i+1 <<" . sayiyi giriniz : ";
        cin >> dizi[i];
    }
    cout << endl << "   Girdiginiz sayilar " << endl;
    for(i=0;i<5;i++)
    {
        cout << dizi[i] <<" ";
    }
    cout << endl << " Girdginiz sayialardan cift olanlar "<< endl ;
    for(i=0;i<5;i++)
    {
        if(dizi[i]%2==0)
        {
            if(dizi[i] != 0)
            {
                cout << dizi[i] <<" ";
            }
        }
    }
    return 0;
}
