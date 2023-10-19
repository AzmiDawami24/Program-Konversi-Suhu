#include <iostream>
using namespace std;

int suhu, fahrenheit, reamur, kelvin;
string tanya;

void konversi() {
    cout << "PROGRAM KONVERSI SUHU" << endl;
    cout << "===============================" << endl;
    cout << endl << "Masukkan suhu (celsius) = ";
    cin >> suhu;

    fahrenheit = suhu * 9 / 5 + 32;
    reamur = suhu * 4 / 5;
    kelvin = suhu + 273.15;

    cout << "-------------------------------" << endl;
    cout << fixed << "Fahrenheit = " << fahrenheit << endl;
    cout << fixed << "Reamur = " << reamur << endl;
    cout << fixed << "Kelvin = " << kelvin << endl; 
    cout << "-------------------------------" << endl << endl;
    cout << "Ingin menghitung lagi? (y/t) = ";
    cin >> tanya;
}

int main() {
    konversi();

    do
    {
        konversi();
    } while (tanya == "Y" || tanya == "y");
    

    // if(tanya == "Y"){
    //     konversi();
    // } else if(tanya == "y"){
    //     konversi();
    // } else {
    //     cout << "Terima kasih sudah menggunakan program ini";
    // }
}