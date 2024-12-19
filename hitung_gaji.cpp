#include <iostream>
using namespace std;

int main() {
    double jamKerja, tarifPerJam, gaji, jamLembur, gajiLembur;
    
    cout << "Masukkan jumlah jam kerja dalam seminggu: ";
    cin >> jamKerja;

    cout << "Masukkan tarif per jam (dalam rupiah): ";
    cin >> tarifPerJam;

    if (jamKerja > 40) {
        jamLembur = jamKerja - 40;
        gajiLembur = jamLembur * tarifPerJam * 1.5; 
        gaji = (40 * tarifPerJam) + gajiLembur;
    } else {
        gaji = jamKerja * tarifPerJam;
    }

    cout << "Gaji karyawan adalah: Rp " << gaji << endl;

    return 0;
}
