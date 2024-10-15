#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai tertinggi dalam array
int cariNilaiMaks(int arr[], int batas) {
    int nMaks = arr[0];
    for (int i = 1; i < batas; i++) {
        if (arr[i] > nMaks) {
            nMaks = arr[i];
        }
    }
    return nMaks;
}

// Fungsi untuk mencari apakah angka ada di dalam array, dan mengembalikan indeks
int cariAngka(int arr[], int batas, int angka) {
    for (int i = 0; i < batas; i++) {
        if (arr[i] == angka) {
            return i;
        }
    }
    return -1;
}

int main() {
    cout<<"Tugas Praktikum 6 Alpro"<<endl<<endl;
    cout<<"Nama       : Defry Ananta Perangin Angin"<<endl;
    cout<<"NPM        : 2410631170066"<<endl;
    cout<<"Kelas/Prodi: 1B/Informatika"<<endl<<endl;

    int batas;

    cout << "Masukkan batas array: ";
    cin >> batas;

    int arr[batas];

    for (int i = 0; i < batas; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int nilaiMaks = cariNilaiMaks(arr, batas);
    cout << "\nNilai tertinggi dalam array adalah: " << nilaiMaks << endl << endl;

    int angka;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> angka;

    int indeks = cariAngka(arr, batas, angka);

    if (indeks != -1) {
        cout << "Angka " << angka << " ditemukan di indeks ke-" << indeks << " (dalam array) " << "atau nilai ke-" << indeks+1 << endl << endl;
    } else {
        cout << "Angka " << angka << " tidak ditemukan dalam array." << endl <<endl;
    }

    return 0;
}
