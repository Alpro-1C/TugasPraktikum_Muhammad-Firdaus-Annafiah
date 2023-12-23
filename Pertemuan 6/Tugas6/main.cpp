#include <iostream>

using namespace std;

    void garis(){
    for(int i=0; i<120; ++i){
        cout << "-";
    }
    }
    int main(){
    int n,i,nilaiangka,indeks;
    cout << "\t\t\tMesin Pencari Bilangan Tertinggi\n";
    garis();

    cout << "\nMasukkan jumlah bilangan : ";
    cin >> n;
    cout << endl;

    int nilai[n];
    for(i=0; i<n; ++i){

        cout << "Masukkan bilangan ke - " << i << " = ";
        cin >> nilai[i];

    }

    nilaiangka=nilai[0];
    indeks=0;

    //Mencari nilai tertinggi dalam array
    for(i=0; i<n; ++i){
        if(nilaiangka<nilai[i]){
        nilaiangka=nilai[i];
        indeks=i;
        }
    }
    //menampilkan nilai tertinggi
    cout << "\nNilai tertingginya adalah "
    << nilaiangka << " yang berada pada indeks ke  "
    << indeks << endl;
    garis();

    return 0;
}
