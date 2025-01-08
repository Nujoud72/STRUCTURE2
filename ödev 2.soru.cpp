#include <iostream> 
#include <string> // String veri tipi i�in 
 
using namespace std; 
 
// Kuma� yap�s� 
struct Kumas { 
    string ipliktipi; 
    double dm2agirlik; // d/m2 ba��na a��rl�k 
    string dokumatipi; 
    string renk; 
    int miktar; // Metre cinsinden miktar 
}; 
 
// �skelet yap�s� 
struct Iskelet { 
    string malzeme; 
    string birlestirme; 
    string tarz; 
    string boyut; 
    int miktar; // Birim cinsinden miktar 
}; 
 
// Mobilya yap�s� 
struct Mobilya { 
    Kumas kaplama; // Kuma� yap�s�ndan 
    Iskelet malzeme; // �skelet yap�s�ndan 
    int fiyat; // Mobilya fiyat� 
    int adet;  // �retilen adet 
}; 
 
int main() { 
    // 10 mobilya i�in bir dizi tan�ml�yoruz 
    Mobilya urunler[10]; 
    int toplamFiyat = 0; // Toplam fiyat i�in de�i�ken 
 
    // Veri giri�i 
    for (int i = 0; i < 10; i++) { 
        cout << "Mobilya " << i + 1 << " i�in veri giriniz:" << endl; 
 
        // Kaplama bilgileri 
        cout << "Kuma� bilgileri:" << endl; 
        cout << "�plik Tipi: "; 
        cin >> urunler[i].kaplama.ipliktipi; 
        cout << "d/m2 A��rl�k: "; 
        cin >> urunler[i].kaplama.dm2agirlik; 
        cout << "Dokuma Tipi: "; 
        cin >> urunler[i].kaplama.dokumatipi; 
        cout << "Renk: "; 
        cin >> urunler[i].kaplama.renk; 
        cout << "Miktar (metre): "; 
        cin >> urunler[i].kaplama.miktar; 
 
        // �skelet bilgileri 
        cout << "�skelet bilgileri:" << endl; 
        cout << "Malzeme: "; 
        cin >> urunler[i].malzeme.malzeme; 
        cout << "Birle�tirme Tipi: "; 
        cin >> urunler[i].malzeme.birlestirme; 
        cout << "Tarz: "; 
        cin >> urunler[i].malzeme.tarz; 
        cout << "Boyut: "; 
        cin >> urunler[i].malzeme.boyut; 
        cout << "Miktar (adet): "; 
        cin >> urunler[i].malzeme.miktar; 
 
        // Fiyat ve adet bilgileri 
        cout << "Mobilya Fiyat�: "; 
        cin >> urunler[i].fiyat; 
        cout << "Adet: "; 
        cin >> urunler[i].adet; 
 
        // Toplam fiyat� hesapla 
        toplamFiyat += urunler[i].fiyat * urunler[i].adet; 
 
        cout << endl; 
    } 
 
    // Verileri listeleme 
    cout << "�r�n Bilgileri:" << endl; 
    for (int i = 0; i < 10; i++) { 
        cout << "Mobilya " << i + 1 << ":" << endl; 
        cout << "Kuma� Bilgileri - �plik Tipi: " << urunler[i].kaplama.ipliktipi 
             << ", d/m2 A��rl�k: " << urunler[i].kaplama.dm2agirlik 
             << ", Dokuma Tipi: " << urunler[i].kaplama.dokumatipi 
             << ", Renk: " << urunler[i].kaplama.renk 
             << ", Miktar: " << urunler[i].kaplama.miktar << " metre" << endl; 
 
        cout << "�skelet Bilgileri - Malzeme: " << urunler[i].malzeme.malzeme 
             << ", Birle�tirme Tipi: " << urunler[i].malzeme.birlestirme 
             << ", Tarz: " << urunler[i].malzeme.tarz 
             << ", Boyut: " << urunler[i].malzeme.boyut 
             << ", Miktar: " << urunler[i].malzeme.miktar << " adet" << endl; 
 
        cout << "Fiyat: " << urunler[i].fiyat << " TL" 
             << ", Adet: " << urunler[i].adet << endl; 
 
        cout << endl; 
    } 
 
    // Toplam fiyat� ekrana yazd�r 
    cout << "T�m �r�nlerin toplam fiyat�: " << toplamFiyat << " TL" << endl; 
 
    return 0; 
} 
