#include <iostream> 
#include <string> // String veri tipi için 
 
using namespace std; 
 
// Kumaþ yapýsý 
struct Kumas { 
    string ipliktipi; 
    double dm2agirlik; // d/m2 baþýna aðýrlýk 
    string dokumatipi; 
    string renk; 
    int miktar; // Metre cinsinden miktar 
}; 
 
// Ýskelet yapýsý 
struct Iskelet { 
    string malzeme; 
    string birlestirme; 
    string tarz; 
    string boyut; 
    int miktar; // Birim cinsinden miktar 
}; 
 
// Mobilya yapýsý 
struct Mobilya { 
    Kumas kaplama; // Kumaþ yapýsýndan 
    Iskelet malzeme; // Ýskelet yapýsýndan 
    int fiyat; // Mobilya fiyatý 
    int adet;  // Üretilen adet 
}; 
 
int main() { 
    // 10 mobilya için bir dizi tanýmlýyoruz 
    Mobilya urunler[10]; 
    int toplamFiyat = 0; // Toplam fiyat için deðiþken 
 
    // Veri giriþi 
    for (int i = 0; i < 10; i++) { 
        cout << "Mobilya " << i + 1 << " için veri giriniz:" << endl; 
 
        // Kaplama bilgileri 
        cout << "Kumaþ bilgileri:" << endl; 
        cout << "Ýplik Tipi: "; 
        cin >> urunler[i].kaplama.ipliktipi; 
        cout << "d/m2 Aðýrlýk: "; 
        cin >> urunler[i].kaplama.dm2agirlik; 
        cout << "Dokuma Tipi: "; 
        cin >> urunler[i].kaplama.dokumatipi; 
        cout << "Renk: "; 
        cin >> urunler[i].kaplama.renk; 
        cout << "Miktar (metre): "; 
        cin >> urunler[i].kaplama.miktar; 
 
        // Ýskelet bilgileri 
        cout << "Ýskelet bilgileri:" << endl; 
        cout << "Malzeme: "; 
        cin >> urunler[i].malzeme.malzeme; 
        cout << "Birleþtirme Tipi: "; 
        cin >> urunler[i].malzeme.birlestirme; 
        cout << "Tarz: "; 
        cin >> urunler[i].malzeme.tarz; 
        cout << "Boyut: "; 
        cin >> urunler[i].malzeme.boyut; 
        cout << "Miktar (adet): "; 
        cin >> urunler[i].malzeme.miktar; 
 
        // Fiyat ve adet bilgileri 
        cout << "Mobilya Fiyatý: "; 
        cin >> urunler[i].fiyat; 
        cout << "Adet: "; 
        cin >> urunler[i].adet; 
 
        // Toplam fiyatý hesapla 
        toplamFiyat += urunler[i].fiyat * urunler[i].adet; 
 
        cout << endl; 
    } 
 
    // Verileri listeleme 
    cout << "Ürün Bilgileri:" << endl; 
    for (int i = 0; i < 10; i++) { 
        cout << "Mobilya " << i + 1 << ":" << endl; 
        cout << "Kumaþ Bilgileri - Ýplik Tipi: " << urunler[i].kaplama.ipliktipi 
             << ", d/m2 Aðýrlýk: " << urunler[i].kaplama.dm2agirlik 
             << ", Dokuma Tipi: " << urunler[i].kaplama.dokumatipi 
             << ", Renk: " << urunler[i].kaplama.renk 
             << ", Miktar: " << urunler[i].kaplama.miktar << " metre" << endl; 
 
        cout << "Ýskelet Bilgileri - Malzeme: " << urunler[i].malzeme.malzeme 
             << ", Birleþtirme Tipi: " << urunler[i].malzeme.birlestirme 
             << ", Tarz: " << urunler[i].malzeme.tarz 
             << ", Boyut: " << urunler[i].malzeme.boyut 
             << ", Miktar: " << urunler[i].malzeme.miktar << " adet" << endl; 
 
        cout << "Fiyat: " << urunler[i].fiyat << " TL" 
             << ", Adet: " << urunler[i].adet << endl; 
 
        cout << endl; 
    } 
 
    // Toplam fiyatý ekrana yazdýr 
    cout << "Tüm ürünlerin toplam fiyatý: " << toplamFiyat << " TL" << endl; 
 
    return 0; 
} 
