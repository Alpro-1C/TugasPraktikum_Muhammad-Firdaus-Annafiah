#include <iostream>
using namespace std;

int main(){
    int batas;
    int BilanganPrima = 0;
    int BilanganGanjil = 0;
    int BilanganGenap = 0;

    // Bilangan Prima
    do {
        cout<< "Masukkan batas bilangan positif :" ;
        cin>>batas;
}
    while (batas<=0);
        cout << "Bilangan Prima antara 1 dan" << batas << "adalah:" ;
    for (int i = 2; i <= batas; ++i){
    int BilanganPrima = 1;
    for (int j = 2; j * j <= i; ++j){
    if (i % j == 0){
    BilanganPrima = 0;
    break;
    }

}
    if (BilanganPrima == 1){
        cout << i << " " ;
    BilanganPrima += i;
}
 }

//Bilangan Ganjil
 cout << "Bilangan Ganjil antara 1 dan" << batas << "adalah:" ;
 for (int j = 1; j <= batas; ++j){
   if (j % 2 != 0)
        cout << j << " ";
   if (j % 2 != 0) BilanganGanjil += j;
}

    //Bilangan genap
        cout << "Bilangan Genap antara 1 dan" << batas << "adalah:" ;
    for (int k = 1; k <= batas; ++k){
    if (k % 2 == 0)
        cout << k << " ";
    if (k % 2 == 0) BilanganGenap += k;
}

    //Hasil Operasi
        cout << "Jumlah semua bilangan prima antara 1 dan " << batas << "adalah:" << BilanganPrima << endl;
        cout << "Jumlah semua bilangan ganjil antara 1 dan " << batas << "adalah:" << BilanganGanjil << endl;
        cout << "Jumlah semua bilangan genap antara 1 dan " << batas << "adalah:" << BilanganGenap << endl;

    //Faktor
        cout << "Faktor-faktor dari jumlah prima tersebut adalah:" ;
    for (int r = 1; r <= BilanganPrima; r++){
    if (BilanganPrima % r == 0){
        cout << r << " ";
}

}
        cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
    for (int s = 1; s <= BilanganGanjil; s++){
    if (BilanganGanjil % s == 0){
        cout << s << " ";
}

}
        cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
    for (int t = 1; t <= BilanganGenap; t++){
    if (BilanganGenap % t == 0){
        cout << t << " ";
}

}
   cout << endl;
return 0;
}
