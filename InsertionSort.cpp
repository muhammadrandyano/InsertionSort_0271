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
cin >> arr[i]; // menyimpan nilai data n kedalam array arr
}
}

void insertionSort()
{ // procedure insertionsort

int temp; // membuat variable data temporer atau penyimpanan sementara 
int j, i; // membuat variable j sebagai penanda 

for (i = 1; i <= n - 1; i++)
{ // step 1 

temp = arr[i]; // step 2

j = i - 1; // step 3

while (j >= 0 && arr[j] > temp) // step 4 
{
    (arr[j + 1] = arr[j] > temp)
    j--; // step 4b
}

arr [j + 1] = temp; // step 5
}
}

void display()
{
    cout << endl; // output baris kosong
    cout << "===============================" << endl; 
    cout << "total pass = " << n - 1 << endl; // cout element movement 
    cout << "=================================" << endl; // output ke layar  
    cout << "element array yang telah tersusun" << endl; // output ke layar 
    cout << "=================================" << endl; // output ke layar 

    for (int j = 0; j < n; j++)
    { // looping dengan dimulai dari 0 hingga n-1
        cout << arr [j] ,, endl; // output ke layar 
    }
    cout << endl; // output baris kosong 
}

int main()
{
    input();
    insertionsort();
    display();
    system("pause");
    return 0;
}