#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur data untuk lagu
struct Lagu {
    string judul;
    string artis;
};

// Fungsi untuk menambahkan lagu ke playlist
void tambahLagu(vector<Lagu>& playlist, const string& judul, const string& artis) {
    Lagu lagu = {judul, artis};
    playlist.push_back(lagu);
    cout << "Lagu ditambahkan ke Firgi Zaidan Bahressy's Playlist" << endl;
}

// Fungsi untuk menampilkan playlist
void tampilkanPlaylist(const vector<Lagu>& playlist) {
    cout << "Playlist Firgi Zaidan Bahressy's Playlist dan Favorite Playlist:" << endl << endl;
    for (size_t i = 0; i < playlist.size(); ++i) {
        cout << i + 1 << ". " << playlist[i].judul << " - " << playlist[i].artis << endl;
    }
}

int main() {
    vector<Lagu> playlist; // Playlist lagu

    int pilihan;
    string judul, artis;

    do {
        // Menampilkan menu
        cout << "Menu:" << endl << endl;
        cout << "1. Tambah Lagu ke Firgi Zaidan Bahressy's Playlist" << endl;
        cout << "2. Tambah Lagu ke Favorite Playlist" << endl;
        cout << "3. Tampilkan Playlist" << endl;
        cout << "0. Keluar" << endl;

        // Meminta input pilihan dari pengguna
        cout << "Pilihan: ";
        cin >> pilihan;

        // Melakukan aksi sesuai pilihan pengguna
        switch (pilihan) {
            case 1:
                cout << "Masukkan judul lagu: ";
                cin.ignore();
                getline(cin, judul);
                cout << "Masukkan nama artis: ";
                getline(cin, artis);
                tambahLagu(playlist, judul, artis);
                break;

            case 3:
                tampilkanPlaylist(playlist);
                break;

            case 0:
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        cout << endl;
    } while (pilihan != 0);

    return 0;
}
