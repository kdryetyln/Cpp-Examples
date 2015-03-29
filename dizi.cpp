#include <iostream>

using namespace std;
main()
{

    string x[3];
    int i;
    cout<<"3 kelime giriniz"<<endl<<endl;
    for(i=0;i<3;i++)
    {
        cout <<i+1<< ". kelimeyi giriniz : " ;
        cin>>x[i];
    }
    cout << endl << "    Girdiginiz kelimeler " << endl ;
    for(i=0;i<3;i++)
    {
    cout << "          " << x[i] << endl;
    }
    return 0;
}
