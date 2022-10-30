#include <iostream>

using namespace std;

int main()
{
    int tahun;
    cout << "Masukkan Tahun: ";
    cin >> tahun;

    cout << "Tahun tersebut adalah tahun ";
    if (tahun%4 == 0)
        cout << "Kabisat";
    else
        cout <<"Bukan kabisat";
    return 0;
}
