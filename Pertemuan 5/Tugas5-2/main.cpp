#include <iostream>
using namespace std;

void fibonacci (int sum, int t1 = 0, int t2 = 1, int angka_selanjutnya = 0) {

    cout << "Hasil Jumlah deret fibonacci yang diinput: ";

    for(int i = 1; i <= sum; i++) {
        // Menampilkan 2 angka pertamanya
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        // dihitung dari angka 3 sampai seterusnya
        angka_selanjutnya = t1 + t2;
        t1 = t2;
        t2 = angka_selanjutnya;

        cout << angka_selanjutnya << " ";
    }

  cout << endl;
}

int main () {
  int sum;

    cout << "Masukkan jumlah angka yang diinput: ";
    cin >> sum;

    fibonacci(sum);
      return 0;
}
