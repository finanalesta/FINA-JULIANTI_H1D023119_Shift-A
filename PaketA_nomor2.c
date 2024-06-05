#include <stdio.h>
//KAK RIAN & KAK NABILA PLIS DAPAT 100 dong buat nana ^-^, 
//ak sdh berusaha kl salah mff yh

// Fungsi untuk mencetak isi array
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Halaman %d: %d\n", i + 1, arr[i]);
    }
}

int main() {
    // Nomor 1. Definisikan array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};  // Halaman awal dari BAB 1 - Daftar Pustaka
    int size = sizeof(arr) / sizeof(arr[0]);

    // Nomor 2. Cetak isi array sebelum perubahan
    printf("Daftar halaman sebelum perubahan:\n");
    printArray(arr, size);

    // Nomor 3. Ubah value pada array menggunakan pointer
    int *x = arr;
    *(x + 1) += 2;  // BAB 2 bertambah 2 halaman
    *(x + 2) += 3;  // BAB 3 bertambah 3 halaman
    *(x + 4) += 1;  // BAB 5 bertambah 1 halaman

    // Nomor 4. Cetak isi array setelah perubahan
    printf("\nDaftar halaman setelah perubahan:\n");
    printArray(arr, size);

    return 0;
}
