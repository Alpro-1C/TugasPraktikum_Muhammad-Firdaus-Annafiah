#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, angkaberikutnya = 0;
    cout << "Masukkan jumlah angka dalam deret finobacci: ";
    cin >> n;
// Fungsi untuk menghitung Fibonacci ke-n
int fibonacci(int n) {
  if(n <= 1) return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

// Fungsi untuk mencetak deret Fibonacci 1 sampai n
void printFibonacci(int n) {
  for(int i = 1; i <= n; i++) {
    cout << fibonacci(i) << " ";
  }
}

    for(int i = 1; i <= n; i++) {
        // Tampilkan 2 angka pertama
        if(i == 1) {
            cout << a << " ";
        }
        if(i == 2) {
            cout << b << " ";
        }
        // Hitung angka ke 3 dan seterusnya
        angkaberikutnya = a + b;
        a = b;
        b = angkaberikutnya;
int main() {
  int n;
  cout << "Masukkan jumlah angka Fibonacci: ";
  cin >> n;

        cout << angkaberikutnya << " ";
    }
  cout << "Deret Fibonacci: ";
  printFibonacci(n);

  cout << endl;
  return 0;
}
