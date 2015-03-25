#include <iostream>

using namespace std;

int main()
{
    cout << "Start" << endl;
    try {//try bloguna basla
        cout<<"Inside try block"<<endl;
        throw 10;//bir hata atar
        cout<<"this will not execute";
    }
    catch (int i){//hatayý yakala
    cout<<"caught one! number is: ";
    cout<<i<<endl;
    }
    cout<<"end";
    return 0;
}
