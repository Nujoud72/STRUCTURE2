#include <iostream>
#include <string> // String veri tipi i�in

using namespace std;

// G�nderen ve Al�c� bilgileri i�in yap�
struct Kisi {
    string adi_soyadi;
    string adresi;
    string telefon_no;
};

// G�nderi bilgileri i�in yap�
struct Gonderi {
    int gonderi_no;
    double agirlik; // kilogram cinsinden
    double hacim;   // metrek�p cinsinden
    char garanti;   // 'e' veya 'h'
    double ucret;   // �cret bilgisi
    Kisi gonderen;  // G�nderen bilgileri
    Kisi alici;     // Al�c� bilgileri
};

// Kurye bilgileri i�in yap�
struct Kurye {
    string adi_soyadi;
    string telefon_no;
};

int main() {
    // 5 adet g�nderi i�in dizi tan�mlan�r
    Gonderi gonderiler[5];
    Kurye kurye = {"Ahmet Y�lmaz", "0555 123 4567"}; // Sabit kurye bilgisi

    // Veri giri�i
    for (int i = 0; i < 5; i++) {
        cout << "Gonderi " << i + 1 << " bilgilerini giriniz:" << endl;

        // G�nderi bilgileri
        cout << "Gonderi Numaras: ";
        cin >> gonderiler[i].gonderi_no;
        cout << "Agrlk (kg): ";
        cin >> gonderiler[i].agirlik;
        cout << "Hacim (metrek�p): ";
        cin >> gonderiler[i].hacim;
        cout << "Garanti (e/h): ";
        cin >> gonderiler[i].garanti;
        cout << "ucret (TL): ";
        cin >> gonderiler[i].ucret;

        // G�nderen bilgileri
        cout << "Gonderen Bilgileri:" << endl;
        cout << "Ad Soyadi: ";
        cin.ignore(); // Sat�r sonu karakterini temizler
        getline(cin, gonderiler[i].gonderen.adi_soyadi);
        cout << "Adresi: ";
        getline(cin, gonderiler[i].gonderen.adresi);
        cout << "Telefon No: ";
        getline(cin, gonderiler[i].gonderen.telefon_no);

        // Al�c� bilgileri
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
             << ", Hacim: " << gonderiler[i].hacim << " metrek�p"
             << ", Garanti: " << (gonderiler[i].garanti == 'e' ? "Evet" : "Hay�r")
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

