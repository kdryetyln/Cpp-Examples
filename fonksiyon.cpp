#include <iostream>

using namespace std;
void muhendis (void);//ilk void program sonucunda herhangi bir deðer döndermiceðimizi ifade eder
//ikinci void ise biz program içinde herhangi bir deðer fonksiyona döndermiceðimiz anlamýna gelmektedir
//yani ne program ne de biz herhangi bir deðer döndermicez
//yapacaðý tek þey muhendis() i çaðýrdýðýmýzda en alttakini ekrana yazdýrmak olucak
int main()
{
    int m;
    cout << "Bir deger giriniz : \n" ;//endl alt satýrdan baþlatýyor.
    cin >>m;
    muhendis();//void olduðunda fonksiyonun içine bir deðer girmeyiz
    // girdiðimiz takdirde sistem hata verir
    //bunu mutlaka çaðýrmalýyýz(ana fonksiyonun yani mainin içinde çaðýrmalýyýz )
    //eðer bunu çaðýrmazsak yani yazmassak  en alttakini ekrana yazdýrmaz.
    return 0;
}
void muhendis(void)//fonksiyona bir deðer göndermicez
{
    cout<< "Program fonksiyona girmistir";// ";" bunu unutma sakýn !!
}
