#include <iostream>

using namespace std;

int main()
{
    int suma=0, liczby, liczba;
    cout << "Podaj ilosc liczb:" << endl;
    cin >> liczba;
    for (int i = 0; i<liczba; i++)
    {
        cout<<"Podaj liczbe:";
        cin>>liczby;
        suma+=liczby;
    }
    cout<<"Suma liczb:"<<suma<<endl;
    return 0;
}
