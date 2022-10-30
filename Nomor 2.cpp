#include <iostream>

using namespace std;

int main()
{
    string uname, pw;

    cout << "Masukkan Username dan Password Anda!" <<endl;
    cin >> uname;
    cin >> pw;

    if (uname == "Mantulisme"){
        if (pw == "123mantul"){
            cout << "Username dan Password sesuai, Login Berhasil";
        }else{
            cout << "Username sesuai, Password salah, Login Gagal";
        }
    }else{
        if(pw == "123mantul"){
            cout << "Username salah, Password sesuai, Login Gagal";
        }else
            cout << "Username dan Password salah, Login Gagal";
        }


    return 0;
}
