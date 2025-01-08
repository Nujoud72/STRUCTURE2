#include <iostream> 
#include <string> // Marka ve model için string tipi kullanýmý 
using namespace std; 
// Otomobil yapýsý tanýmlanýyor 
struct Otomobil { 
string marka; 
string model; 
int yil; 
char yakit; // 'B': Benzin, 'D': Dizel, 'G': Gaz, 'H': Hibrit 
int km; 
double fiyat; 
}; 
int main() { 
// Otomobil türünden deðiþkenler tanýmlanýyor 
Otomobil binek, suv, ticari; 
// Binek aracýna veri giriþi 
binek.marka = "Toyota"; 
binek.model = "Corolla"; 
binek.yil = 2020; 
binek.yakit = 'B'; 
binek.km = 45000; 
binek.fiyat = 320000; 
// SUV aracýna veri giriþi 
suv.marka = "Nissan"; 
suv.model = "X-Trail"; 
suv.yil = 2018; 
suv.yakit = 'D'; 
suv.km = 60000; 
suv.fiyat = 420000; 
// Ticari aracýna veri giriþi 
ticari.marka = "Ford"; 
ticari.model = "Transit"; 
ticari.yil = 2015; 
ticari.yakit = 'D'; 
ticari.km = 120000; 
ticari.fiyat = 250000; 
// Verileri listeleme 
cout << "Binek Araç Bilgileri:" << endl; 
cout << "Marka: " << binek.marka << endl; 
cout << "Model: " << binek.model << endl; 
cout << "Yýl: " << binek.yil << endl; 
cout << "Yakýt: " << binek.yakit << endl; 
cout << "KM: " << binek.km << endl; 
cout << "Fiyat: " << binek.fiyat << " TL" << endl << endl; 
cout << "SUV Araç Bilgileri:" << endl; 
cout << "Marka: " << suv.marka << endl; 
cout << "Model: " << suv.model << endl; 
cout << "Yýl: " << suv.yil << endl; 
cout << "Yakýt: " << suv.yakit << endl; 
cout << "KM: " << suv.km << endl; 
cout << "Fiyat: " << suv.fiyat << " TL" << endl << endl; 
cout << "Ticari Araç Bilgileri:" << endl; 
cout << "Marka: " << ticari.marka << endl; 
cout << "Model: " << ticari.model << endl; 
cout << "Yýl: " << ticari.yil << endl; 
cout << "Yakýt: " << ticari.yakit << endl; 
cout << "KM: " << ticari.km << endl; 
cout << "Fiyat: " << ticari.fiyat << " TL" << endl; 
return 0; 
} 

