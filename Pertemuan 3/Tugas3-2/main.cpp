#include <iostream>

using namespace std;

int main (){
    int a, b, c;
    cout << "Masukan Nilai A:";
    cin >> a;

    cout << "Masukan Nilai B:";
    cin >> b;

    cout << "Masukan Nilai C:";
    cin >> c;

    if (a>b && a>c){ //Ketika Nilai A lebih besar dari Nilai B dan Nilai A lebih besar dari Nilai C maka nilai yang akan keluar adalah Nilai (A)
        cout << "Nilai Terbesar Adalah Nilai A" << a;
    }

    else if (b>a && b>c){ //Ketika Nilai B lebih besar dari Nilai A dan Nilai B lebih besar dari Nilai C maka nilai yang akan keluar adalah Nilai (B)
        cout << "Nilai Terbesar Adalah Nilai B" << b;
    }

    else if (c>a && c>b){//Ketika Nilai C lebih besar dari Nilai A dan Nilai c lebih besar dari Nilai B maka nilai yang akan keluar adalah Nilai (C)
        cout << "Nilai Terbesar Adalah Nilai C" << c;
    }

    else { //kondisi ini akan keluar ketika 3 kondisi diatas tidak ada yang terjadi
        cout << "Tidak Ada Nilai Terbesar !";
    }

return 0;
}
