#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{ // procedure input 
while (true)
{
cout << "masukan jumlah data pada array : "; // membuat inputan jumlah element array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // membuat kondisi n tidak lebih dari 20 
break;
}
else
{
    cout << "\nArray yang anda masukan maksimal 20 element.\n"; // menampilkan pesan jika data lebih dari 20
}
}
cout << endl; //membuat jarak per baris program 
cout << "=====================" << endl; // membuat tampilkan susunan data element array
cout << "masukan element array" << endl;
cout << "=====================" << endl;

for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array 

cout << "Data ke-" << (i+1) << ": "; // memasukan atau menginputkan nilai data n
