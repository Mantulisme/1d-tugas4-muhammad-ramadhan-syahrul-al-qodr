#include <iostream>

using namespace std;

int main()
{
   int num;
    cout << "Masukkan Angka: ";
    cin >> num;

    cout << "Angka tersebut adalah ";
    if (num%2 == 0)
    cout << "Genap";
    else
    cout << "Ganjil";

    return 0;
}
