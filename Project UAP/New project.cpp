#include <iostream>
using namespace std;
    
void tampilkanMenu() {
    cout << "============================\n";
    cout << "Selamat datang di Fit App!\n";
    cout << "Silakan pilih salah satu opsi berikut:\n";
    cout << "1. Cek tekanan darah\n";
    cout << "2. Hitung kalori\n";
    cout << "3. Cek tinggi badan\n";
    cout << "4. Keluar\n";
    cout << "============================" << endl << endl;
}

int main() {
    
    float tinggi, beratIdeal;
    string jenisMakanan;
    double jumlahMakanan, kaloriPerSatuan, totalKalori;
    int sistolik, diastolik, pilihan, aktivitas;

        
    do {
        
        tampilkanMenu();
        
        cout << "Masukkan pilihan Anda : ";
        cin >> pilihan;

        switch (pilihan) {
            
            case 1:
                cout << "Anda memilih untuk cek tekanan darah\n";
                cout << "Masukkan nilai tekanan darah sistolik (atas) : ";
                cin >> sistolik;

                cout << "Masukkan nilai tekanan darah diastolik (bawah) : ";
                cin >> diastolik;

                if (sistolik < 90 && diastolik < 60) {
                    cout << "Tekanan darah rendah\n";
                
                } else if ((sistolik >= 90 && sistolik <= 120) && (diastolik >= 60 && diastolik <= 80)) {
                    cout << "Tekanan darah normal\n";
                
                } else if ((sistolik > 120 && sistolik <= 140) || (diastolik > 80 && diastolik <= 90)) {
                    cout << "Tekanan darah tinggi (prehypertension)\n";
                
                } else if ((sistolik > 140 && sistolik <= 160) || (diastolik > 90 && diastolik <= 100)) {
                    cout << "Tekanan darah tinggi tahap 1\n";
                
                } else if (sistolik > 160 || diastolik > 100) {
                    cout << "Tekanan darah tinggi tahap 2\n";
                
                } else {
                    cout << "Masukkan nilai tekanan darah yang valid\n";
                }
                
                break;
            
            
            case 2:
                cout << "Anda memilih untuk menghitung kalori\n";
                cout << "Masukkan jenis makanan : ";
                cin >> jenisMakanan;

                cout << "Masukkan jumlah " << jenisMakanan << " (dalam satuan yang sesuai) : ";
                cin >> jumlahMakanan;

                cout << "Masukkan jumlah kalori per satuan " << jenisMakanan << " : ";
                cin >> kaloriPerSatuan;

                totalKalori = jumlahMakanan * kaloriPerSatuan;

                cout << "Total kalori untuk " << jumlahMakanan << " " << jenisMakanan << " adalah " << totalKalori << " kalori." << std::endl;

                if (totalKalori < 500) {
                    cout << "Ini adalah makanan ringan dengan sedikit kalori, Bagus untuk camilan!" << endl;
                
                } else if (totalKalori >= 500 && totalKalori <= 1000) {
                    cout << "Makanan ini memiliki jumlah kalori yang cukup, Nikmatilah dengan bijak!" << endl;
                
                } else {
                    cout << "Ini adalah makanan tinggi kalori, Perhatikan asupan kalori harian Anda!" << endl;
                }
                
                break;

    
            case 3:
                cout << "Anda memilih untuk cek tinggi badan\n";
                cout << "Masukkan tinggi badan Anda (cm) : ";
                cin >> tinggi;

                beratIdeal = (tinggi - 100) - ((tinggi - 100) * 0.1);

                cout << "Berat badan ideal Anda adalah " << beratIdeal << " kg" << endl;

                break;
                        
                        
            case 4:
                cout << "Terima kasih, sampai jumpa!";
                break;
                        
                                      
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
                    }
                } while (pilihan != 4);

                return 0;
            }