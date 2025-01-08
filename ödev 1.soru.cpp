#include <iostream> 
#include <string> // Marka ve model i�in string tipi kullan�m� 
using namespace std; 
// Otomobil yap�s� tan�mlan�yor 
struct Otomobil { 
string marka; 
string model; 
int yil; 
char yakit; // 'B': Benzin, 'D': Dizel, 'G': Gaz, 'H': Hibrit 
int km; 
double fiyat; 
}; 
int main() { 
// Otomobil t�r�nden de�i�kenler tan�mlan�yor 
Otomobil binek, suv, ticari; 
// Binek arac�na veri giri�i 
binek.marka = "Toyota"; 
binek.model = "Corolla"; 
binek.yil = 2020; 
binek.yakit = 'B'; 
binek.km = 45000; 
binek.fiyat = 320000; 
// SUV arac�na veri giri�i 
suv.marka = "Nissan"; 
suv.model = "X-Trail"; 
suv.yil = 2018; 
suv.yakit = 'D'; 
suv.km = 60000; 
suv.fiyat = 420000; 
// Ticari arac�na veri giri�i 
ticari.marka = "Ford"; 
ticari.model = "Transit"; 
ticari.yil = 2015; 
ticari.yakit = 'D'; 
ticari.km = 120000; 
ticari.fiyat = 250000; 
// Verileri listeleme 
cout << "Binek Ara� Bilgileri:" << endl; 
cout << "Marka: " << binek.marka << endl; 
cout << "Model: " << binek.model << endl; 
cout << "Y�l: " << binek.yil << endl; 
cout << "Yak�t: " << binek.yakit << endl; 
cout << "KM: " << binek.km << endl; 
cout << "Fiyat: " << binek.fiyat << " TL" << endl << endl; 
cout << "SUV Ara� Bilgileri:" << endl; 
cout << "Marka: " << suv.marka << endl; 
cout << "Model: " << suv.model << endl; 
cout << "Y�l: " << suv.yil << endl; 
cout << "Yak�t: " << suv.yakit << endl; 
cout << "KM: " << suv.km << endl; 
cout << "Fiyat: " << suv.fiyat << " TL" << endl << endl; 
cout << "Ticari Ara� Bilgileri:" << endl; 
cout << "Marka: " << ticari.marka << endl; 
cout << "Model: " << ticari.model << endl; 
cout << "Y�l: " << ticari.yil << endl; 
cout << "Yak�t: " << ticari.yakit << endl; 
cout << "KM: " << ticari.km << endl; 
cout << "Fiyat: " << ticari.fiyat << " TL" << endl; 
return 0; 
} 

