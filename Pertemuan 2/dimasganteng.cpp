#include <iostream>

using namespace std;

int main(){

    char customer[30];
    int kamar, no_kamar, harga_kamar, ranjang;
    int total, lama, um, kurang;
    float diskon;
    string jwb, id_customer, id_resepsionis, jk, hp, checkout, checkin, fixkam;

    awal:
    cout << endl;
    cout << "\t\t                =============================================                " << endl;
    cout << "\t\t          ===========================================================          " << endl;
    cout << "\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl << endl;
    cout << "\t\t                            SELAMAT DATANG DI HOTEL DIMS                              " << endl;
    cout << "\t\t                       JL. Yang Datar, no 69 telp 0895372206191                        " << endl;
    cout << "\t\t     Desa Batang Kulur Kab. Kotabaru Kec. Kelumpang Barat, Kalimantan Selatan      " << endl << endl;
    cout << "\t\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "\t\t                =============================================                     " << endl;

    cout << "\t\tSilahkan Isi form berikut ini " << endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\tNama Pemesan                        : ";    cin >>customer;
    cout << "\t\tJenis Kelamin [L/P]                 : ";    cin >>jk;
    cout << "\t\tNomor Telepon/HP                    : ";    cin >>hp;
    cout << "\t\t==================================================================================" <<endl<<endl;


    cout << "\t\tSilahkan pilih tipe kamar yang anda inginkan" << endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\t1. Standart     "<<endl;
    cout << "\t\t2. Superior     "<<endl;
    cout << "\t\t3. Deluxe       "<<endl;
    cout << "\t\t4. Junior Suite "<<endl;
    cout << "\t\t5. Suite        "<<endl;
    cout << "\t\t6. Presidential "<<endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\tMasukkan Pilihan : ";
    cin >> kamar;
    cout << endl << endl;

    cout << "\t\tSilahkan Pilih Tipe Bed Yang Anda Inginkan" << endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\t1. Single " <<endl;
    cout << "\t\t2. Twin   " <<endl;
    cout << "\t\t3. Double " <<endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\tMasukkan Pilihan : ";
    cin >> ranjang;
    cout << endl;

    if (kamar==1 && ranjang==1)
    {
        cout <<"\t\tAnda Memilih kamar tipe standart dengan ranjang single";
        fixkam="Standart Dengan Single Bed";
        harga_kamar=200000;
    }

    if (kamar==1 && ranjang==2)
    {
        cout <<"\t\tAnda Memilih kamar tipe standart dengan ranjang Twin";
        fixkam="Standart Dengan Twin Bed";
        harga_kamar=300000;
    }

    if (kamar==1 && ranjang==3)
    {
        cout <<"\t\tAnda Memilih kamar tipe standart dengan ranjang Double";
        fixkam="Standart Dengan Double Bed";
        harga_kamar=350000;
    }

    else if (kamar==2 && ranjang==1)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Superior Dengan Ranjang Single" ;
        fixkam="Superior Dengan Single Bed";
        harga_kamar=550000;
    }
    else if (kamar==2 && ranjang==2)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Superior Dengan Ranjang Twin" ;
        fixkam="Superior Dengan Twin Bed ";
        harga_kamar=650000;
    }
     else if (kamar==2 && ranjang==3)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Superior Dengan Ranjang Double" ;
        fixkam="Superior Dengan Double Bed ";
        harga_kamar=750000;
    }

     else if (kamar==3 && ranjang==1)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Single" ;
        fixkam="Deluxe Dengan Single Bed ";
        harga_kamar=800000;
    }

    else if (kamar==3 && ranjang==2)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Twin" ;
        fixkam="Deluxe Dengan Twin Bed ";
        harga_kamar=900000;
    }

    else if (kamar==3 && ranjang==3)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Double" ;
        fixkam="Deluxe Dengan Double Bed ";
        harga_kamar=1000000;
    }

    else if (kamar==4 && ranjang==1)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Junior Suite Dengan Ranjang Single" ;
        fixkam="Junior Suite Dengan Single Bed ";
        harga_kamar=1200000;
    }

    else if (kamar==4 && ranjang==2)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Junior Suite Dengan Ranjang Twin" ;
        fixkam="Junior Suite Dengan Twin Bed ";
        harga_kamar=1400000;
    }

    else if (kamar==4 && ranjang==3)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Junior Suite Dengan Ranjang Double" ;
        fixkam="Junior Suite Dengan Double Bed ";
        harga_kamar=1600000;
    }

    else if (kamar==5 && ranjang==1)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Single" ;
        fixkam="Suite Dengan Single Bed ";
        harga_kamar=1900000;
    }

    else if (kamar==5 && ranjang==2)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Twin" ;
        fixkam="Suite Dengan Twin Bed ";
        harga_kamar=2000000;
    }

    else if (kamar==5 && ranjang==3)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Double" ;
        fixkam="Suite Dengan Double Bed ";
        harga_kamar=2100000;
    }

    else if (kamar==6 && ranjang==1)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Single" ;
        fixkam="Presidential Dengan Single Bed ";
        harga_kamar=3000000;
    }

    else if (kamar==6 && ranjang==2)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Twin" ;
        fixkam="Presidential Dengan Twin Bed ";
        harga_kamar=3500000;
    }

    else if (kamar==6 && ranjang==3)
    {
        cout << "\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Double" ;
        fixkam="Presidential Dengan Double Bed ";
        harga_kamar=4000000;
    }
    else
    {
        cout << "\t\tMaaf Pilihan Anda Tidak Tersedia" << endl;
        cout << "\t\tUntuk Keamanan Silahkan Isi Data Dari Awal" << endl;
        cout << "\t\tSilahkan Ketik [Y] untuk Memulai Lagi : " ;
        cin >> jwb;
            do{
                goto awal;
            }
                while (jwb=="Y" || jwb=="y");
    }

    cout << endl << endl;
    cout << "\t\tSilahkan Mengisi Form Berikut" << endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\tPilih No. Kamar [1-100]    : ";    cin >> no_kamar;
    cout << "\t\tLama Menginap              : ";    cin >> lama;
    cout << "\t\tTanggal Check In [DOMMYY]  : ";    cin >> checkin;
    cout << "\t\tTanggal Check Out [DOMMYY] : ";    cin >> checkout;
    cout << "\t\t==================================================================================" <<endl<<endl;

    cout << "\t\tData Pemesanan Kamar" << endl;
    cout << "\t\t==================================================================================" <<endl;
    cout << "\t\tNama Pemesan               : " << customer <<endl;
    cout << "\t\tJenis Kelamin [L/P]        : " << jk <<endl;
    cout << "\t\tNomor Telepon/HP           : " << hp <<endl;
    cout << "\t\tTipe Kamar                 : " << fixkam <<endl;
    cout << "\t\tNo. Kamar                  : " << no_kamar << endl;
    cout << "\t\tLama Menginap              : " << lama << " Hari" << endl;
    cout << "\t\tTanggal Check In           : " << checkin << endl;
    cout << "\t\tTanggal Check Out          : " << checkout << endl;
    cout << "\t\tHarga Perhari              : Rp. "  << harga_kamar << endl;
    total=lama*harga_kamar;
    cout << "\t\tHarga Kamar Total          : Rp. "  << total << endl;
    cout << "\t\t===============================================================================" <<endl<<endl;
    cout << "\t\tBiaya Total                : Rp. "  << total << endl;
    cout << "\t\tUang Muka                  : Rp. "  ;
    cin >> um;
    kurang = total - um;
    if(total>=um)
    {
        cout << "\t\tKekurangan                 : Rp. "  << kurang << endl;
    }
    else
    {
        cout << "\t\tKembali                    : Rp. " << kurang*(-1) << endl;
    }
    cout << "\t\t===============================================================================" <<endl<<endl;
    cout << "\t\t                    Terima Kasih Telah Memilih Hotel DIMS " << endl;
    cout << "\t\t                     Sebagai Tempat Peristirahatan Anda" << endl;
    cout << "\t\t===============================================================================" <<endl<<endl;

    cout << "\t\tApakah Anda Ingin Memesan Kamar Lagi? [Ya/tidak] : " << endl;
    cin >> jwb;
    while (jwb == "Ya" || jwb == "ya"){
        goto awal;
    }
    cout << "\t\t\n=======================Terima Kasih Atas Kunjungan Anda========================";

    return 0;

}
