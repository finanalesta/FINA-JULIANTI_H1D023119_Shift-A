#include <iostream>
using namespace std;
//KAK RIAN & KAK NABILA PLIS DAPAT 100 dong buat nana ^-^, 
//ak sdh berusaha kl salah mff yh

// Fungsi linear search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Fungsi binary search
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Format masukan baris pertama(menyebutkan jumlah index/elemen)
    int n, m, x;
    cin >> n >> m ;

    int array_A[n];
    int array_B[m];

    // Input array A
    for (int i = 0; i < n; i++) {
        cin >> array_A[i];
    }

    // Input array B
    for (int i = 0; i < m; i++) {
        cin >> array_B[i];
    }

    // Input nilai yang dicari
    cin >> x;

    // Ini Pemanggilan function kak
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);

//OUTPUT
    // Ketentuan 1. Jika x ditemukan dikedua array
    if (index_A != -1 && index_B != -1) {
        cout << "KEDUANYA " << index_A << " " << index_B << endl;
    // Ketentuan 2. Jika x hanya ditemukan di array index_A
    } else if (index_A != -1) {
        cout << "BHASHA " << index_A << endl;
    // Ketentuan 3. Jika x hanya ditemukan di array index_B
    } else if (index_B != -1) {
        cout << "SENA " << index_B << endl;
    // Ketentuan 4. Jika x tidak ditemukan dikedua array
    } else {
        cout << "TIDAK DITEMUKAN" << endl;
    }

    return 0;
}
