#include <iostream>

using namespace std;

class calisan
{
private://Kapsüllendi,korundu
    string isim = "null";
    float maas;

    //Private değerleri değiştirme ve erişmek için
public:
    string getIsim()
    {
        return isim;
    }

    void setIsim(string isim)
    {
        this->isim = isim;//this->isim private içindeki isim anlamında diğer isim ise bizim gönderdiğimiz
    }

};

int main()
{
    calisan c1;

    cout << c1.getIsim() << endl;

    c1.setIsim("savasee");

    cout << c1.getIsim() << endl;
    
}
