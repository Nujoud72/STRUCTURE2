#include <iostream>
#include <string> // String veri tipi için

using namespace std;

// Gönderen ve Alýcý bilgileri için yapý
struct Kisi {
    string adi_soyadi;
    string adresi;
    string telefon_no;
};

// Gönderi bilgileri için yapý
struct Gonderi {
    int gonderi_no;
    double agirlik; // kilogram cinsinden
    double hacim;   // metreküp cinsinden
    char garanti;   // 'e' veya 'h'
    double ucret;   // ücret bilgisi
    Kisi gonderen;  // Gönderen bilgileri
    Kisi alici;     // Alýcý bilgileri
};

// Kurye bilgileri için yapý
struct Kurye {
    string adi_soyadi;
    string telefon_no;
};

int main() {
    // 5 adet gönderi için dizi tanýmlanýr
    Gonderi gonderiler[5];
    Kurye kurye = {"Ahmet Yýlmaz", "0555 123 4567"}; // Sabit kurye bilgisi

    // Veri giriþi
    for (int i = 0; i < 5; i++) {
        cout << "Gonderi " << i + 1 << " bilgilerini giriniz:" << endl;

        // Gönderi bilgileri
        cout << "Gonderi Numaras: ";
        cin >> gonderiler[i].gonderi_no;
        cout << "Agrlk (kg): ";
        cin >> gonderiler[i].agirlik;
        cout << "Hacim (metreküp): ";
        cin >> gonderiler[i].hacim;
        cout << "Garanti (e/h): ";
        cin >> gonderiler[i].garanti;
        cout << "ucret (TL): ";
        cin >> gonderiler[i].ucret;

        // Gönderen bilgileri
        cout << "Gonderen Bilgileri:" << endl;
        cout << "Ad Soyadi: ";
        cin.ignore(); // Satýr sonu karakterini temizler
        getline(cin, gonderiler[i].gonderen.adi_soyadi);
        cout << "Adresi: ";
        getline(cin, gonderiler[i].gonderen.adresi);
        cout << "Telefon No: ";
        getline(cin, gonderiler[i].gonderen.telefon_no);

        // Alýcý bilgileri
        cout << "Alici Bilgileri:" << endl;
        cout << "Adi Soyadi: ";
        getline(cin, gonderiler[i].alici.adi_soyadi);
        cout << "Adresi: ";
        getline(cin, gonderiler[i].alici.adresi);
        cout << "Telefon No: ";
        getline(cin, gonderiler[i].alici.telefon_no);

        cout << endl;
    }

    // Verileri listeleme
    cout << "Gonderi Bilgileri:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Gonderi " << i + 1 << ":" << endl;
        cout << "Gonderi No: " << gonderiler[i].gonderi_no
             << ", Agirlik: " << gonderiler[i].agirlik << " kg"
             << ", Hacim: " << gonderiler[i].hacim << " metreküp"
             << ", Garanti: " << (gonderiler[i].garanti == 'e' ? "Evet" : "Hayýr")
             << ", Ucret: " << gonderiler[i].ucret << " TL" << endl;

        cout << "Gonderen Bilgileri - Adi Soyadi: " << gonderiler[i].gonderen.adi_soyadi
             << ", Adres: " << gonderiler[i].gonderen.adresi
             << ", Telefon No: " << gonderiler[i].gonderen.telefon_no << endl;

        cout << "Alici Bilgileri - Adi Soyadi: " << gonderiler[i].alici.adi_soyadi
             << ", Adres: " << gonderiler[i].alici.adresi
             << ", Telefon No: " << gonderiler[i].alici.telefon_no << endl;

        cout << "Kurye Bilgisi - Adi Soyadi: " << kurye.adi_soyadi
             << ", Telefon No: " << kurye.telefon_no << endl;

        cout << endl;
    }

    return 0;
}

