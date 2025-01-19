//// Judul : Membuat Aplikasi Game dengan nama game "Three In One Games"
    /*
        Aplikasi Terdiri dari 3 Game : Janken, Tebak Angka, Tic Tac Toe

        Anggota kelompok :  1. Kayla Verda Fawnia Heses (A11.2024.15689)
                            2. Nicko Galang Anarki (A11.2024.15690)
                            3. Haydar Rafa Satya Putra (A11.2024.15700)
    */

    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    using namespace std;




//// Kamus :
    /// Kamus Global
        char game;

        struct GameData
            {
                int skorPemain;
                int skorKomputer;
                int kesempatan;
                char pilihanPemain;
            };

    /// Kamus Bagian Pemilihan Game
        void pemilihan()
        {
            cout << "           =============================================================================           " << endl;
            cout << "           =                     *     Three In One Games     *                        =           " << endl;
            cout << "           =============================================================================           " << endl;
            cout << "                                          created by :                                             " << endl;
            cout << "                                                                                                   " << endl;
            cout << "           Haydar Rafa                    Kayla Verda                       Nicko Galang           " << endl;
            cout << "                                                                                                   " << endl;
            cout << "                                         Enter to start                                            " << endl;
            cout << "           =============================================================================           " << endl << endl;

            cin.get();

            system("cls");
            cout << "           =============================================================================           " << endl;
            cout << "           =                     *     Three In One Games     *                        =           " << endl;
            cout << "           =============================================================================           " << endl << endl;

            cout << "Pilih Jenis Game yang ingin anda mainkan" << endl;
            cout << "A = Janken (Gunting, Batu, Kertas)" << endl;
            cout << "B = Tic Tac toe" << endl;
            cout << "C = Tebak Angka" << endl;
            cout << endl;
            cout << "Pilih game berdasarkan kode (A, B, C): "<< game;
        }


    /// Kamus Bagian Fungsi untuk Menampilkan Aturan Permainan
        void Aturan_Tictactoe()
        {
            cout << endl;
            cout << "           =============================================================================           " << endl;
            cout << "           =                     *     Three In One Games     *                        =           " << endl;
            cout << "           =============================================================================           " << endl;
            cout << "                                  Anda Telah Memilih Permainan                                     " << endl;
            cout << "                                          TIC TAC TOE                                              " << endl;
            cout << "           =============================================================================           " << endl << endl;
            cout << "Ketentuan Bermain : 1. Pemain memasukkan angka (1-9) sesuai dengan letak angka dalam kotak" << endl;
            cout << "                    2. Angka tersebut nantinya akan mengisi kolom dengan huruf 'X' " << endl;
            cout << "                    3. Pemain lain akan mengisi kolom dengan huruf 'O' " << endl;
            cout << "                    4. Dinyatakan menang ketika salah satu pemain berhasil mendapatkan huruf 'X' atau 'O' di 3 kolom" << endl;
            cout << "                       dalam posisi horizontal, vertikal, maupun miring " << endl;
            cout << "                    6. Selamat Bermain" << endl << endl;
        }

        void Aturan_janken()
        {
            cout << endl;
            cout << "           =============================================================================           " << endl;
            cout << "           =                     *     Three In One Games     *                        =           " << endl;
            cout << "           =============================================================================           " << endl;
            cout << "                                  Anda Telah Memilih Permainan                                     " << endl;
            cout << "                                       GUNTING BATU KERTAS                                         " << endl;
            cout << "           =============================================================================           " << endl << endl;
            cout << "Ketentuan Bermain : 1. Pemain menggunakan huruf kapital untuk memilih gunting, batu, ataupun kertas" << endl;
            cout << "                    2. Pemain hanya perlu mengetikkan huruf depannya saja, " << endl;
            cout << "                       semisal pemain memilih gunting berarti pemain hanya perlu mengetik 'G' saja" << endl;
            cout << "                    3. Anda memiliki " << "3" << " kesempatan untuk mengalahkan komputer" << endl;
            cout << "                    4. Selamat bermain" << endl << endl;
        }

        void Aturan_Tebak_angka()
        {
            cout << endl;
            cout << "           =============================================================================           " << endl;
            cout << "           =                     *     Three In One Games     *                        =           " << endl;
            cout << "           =============================================================================           " << endl;
            cout << "                                  Anda Telah Memilih Permainan                                     " << endl;
            cout << "                                          TEBAK ANGKA                                              " << endl;
            cout << "           =============================================================================           " << endl << endl;
            cout << "Ketentuan Bermain : 1. Pemain memasukkan tebakan angka (1-10) ke dalam kolom yang tersedia" << endl;
            cout << "                    2. Komputer akan melihat apakah tebakan anda benar atau salah " << endl;
            cout << "                    3. Jika tebakan salah, komputer akan memberi clue apakah angkanya terlalu tinggi atau terlalu rendah " << endl;
            cout << "                    4. Anda memiliki 5 kesempatan untuk menebak angka, jika kesempatan habis maka anda kalah" << endl;
            cout << "                    5. Dinyatakan menang jika anda telah berhasil menebak angka sebelum kesempatan habis" << endl;
            cout << "                    6. Selamat Bermain" << endl << endl;
        }


    /// Kamus ADT untuk Tic Tac Toe
        struct TicTacToe
        {
            char kotak[10];
            int pemain;
            int status;
            int tanda;

            void init()
            {
                for (int i = 1; i <= 9; i++)
                {
                    kotak[i] = '0' + i;
                }
                pemain = 1;
                status = -1;
            }

            void papan()
            {
                cout << "\nPlayer 1 (X) - Player 2 (O)\n\n";
                cout << "     |     |     \n";
                cout << "  " << kotak[1] << "  |  " << kotak[2] << "  |  " << kotak[3] << "\n";
                cout << "_____|_____|_____\n";
                cout << "     |     |     \n";
                cout << "  " << kotak[4] << "  |  " << kotak[5] << "  |  " << kotak[6] << "\n";
                cout << "_____|_____|_____\n";
                cout << "     |     |     \n";
                cout << "  " << kotak[7] << "  |  " << kotak[8] << "  |  " << kotak[9] << "\n";
                cout << "     |     |     \n\n";
            }

            int checkmenang()
            {
                // Menang
                if (kotak[1] == kotak[2] && kotak[2] == kotak[3]) return 1;
                else if (kotak[4] == kotak[5] && kotak[5] == kotak[6]) return 1;
                else if (kotak[7] == kotak[8] && kotak[8] == kotak[9]) return 1;
                else if (kotak[1] == kotak[4] && kotak[4] == kotak[7]) return 1;
                else if (kotak[2] == kotak[5] && kotak[5] == kotak[8]) return 1;
                else if (kotak[3] == kotak[6] && kotak[6] == kotak[9]) return 1;
                else if (kotak[1] == kotak[5] && kotak[5] == kotak[9]) return 1;
                else if (kotak[3] == kotak[5] && kotak[5] == kotak[7]) return 1;

                //Seri
                else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' &&
                        kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' &&
                        kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9') return 0;

                else return -1;  // Permainan masih berjalan
            }

            bool input(int pilih)
            {
                if (cin.fail())
                {
                    cout << "Input tidak valid.\n";
                    cin.clear();
                    cin.ignore();
                    pemain--;
                }
                else if (pilih < 1 || pilih > 9)
                {
                    cout << "SILAHKAN INPUT ANGKA 1-9. Coba lagi.\n";
                    pemain--;
                }
                else if (kotak[pilih] == 'X' || kotak[pilih] == 'O')
                {
                    cout << "Kotak sudah terisi. Pilih kotak lain.\n";
                    pemain--;
                }
                else
                {
                    tanda = (pemain == 1) ? 'X' : 'O';
                    kotak[pilih] = tanda;
                }
                return true;
            }

            void gantiGiliran()
            {
                pemain = (pemain == 1) ? 2 : 1;
            }
        };


    /// Kamus Fungsi untuk Permainan Janken / Gunting Batu Kertas
        void playJanken(GameData &data)
        {
            string pilihan[] = {"Gunting", "Batu", "Kertas"};
            srand(time(0));

            while (data.kesempatan > 0)
            {
                cout << "\nPilih (G)unting, (B)atu, atau (K)ertas: ";
                cin >> data.pilihanPemain;

                if (data.pilihanPemain != 'G' && data.pilihanPemain != 'B' && data.pilihanPemain != 'K')
                {
                    cout << "Input tidak valid. Masukkan huruf G, B, atau K.\n";
                    continue;
                }

                int randIndex = rand() % 3;
                char pilihanKomputer = pilihan[randIndex][0];
                cout << "Komputer memilih: " << pilihan[randIndex] << endl;

                if (data.pilihanPemain == pilihanKomputer)
                {
                    cout << "Hasil: Seri!" << endl;
                }
                else if ((data.pilihanPemain == 'G' && pilihanKomputer == 'K') ||
                        (data.pilihanPemain == 'B' && pilihanKomputer == 'G') ||
                        (data.pilihanPemain == 'K' && pilihanKomputer == 'B'))
                {
                    cout << "Anda Menang di ronde ini!" << endl;
                    data.skorPemain++;
                }
                else
                {
                    cout << "Komputer Menang di ronde ini!" << endl;
                    data.skorKomputer++;
                }

                data.kesempatan--;
                cout << "Sisa kesempatan: " << data.kesempatan << endl;
            }

            cout << "\nHasil Akhir: \n";
            cout << "Skor Anda: " << data.skorPemain << endl;
            cout << "Skor Komputer: " << data.skorKomputer << endl;

            if (data.skorPemain > data.skorKomputer)
                cout << "Selamat! Anda memenangkan permainan!" << endl;
            else if (data.skorPemain < data.skorKomputer)
                cout << "Komputer memenangkan permainan. Coba lagi!" << endl;
            else
                cout << "Permainan berakhir dengan seri." << endl;
        }


    /// Kamus ADT untuk Permainan Tebak Angka
        struct TebakAngka
        {
            int angkaRahasia;
            int tebakan;
            int kesempatan;

            void inisiasi()
            {
                srand(time(0));
                angkaRahasia = rand() % 10 + 1;
                kesempatan = 5;
            }

            void tampilkanStatus()
            {
                cout << "Anda memiliki " << kesempatan << " kesempatan untuk menebak angka antara 1 hingga 10." << endl;
            }

            bool tebakAngka()
            {
                cout << "Masukkan tebakan Anda: ";
                cin >> tebakan;

                if (cin.fail() || tebakan < 1 || tebakan > 10)
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Input tidak valid. Masukkan angka antara 1 hingga 10 saja.\n";
                    return false;
                }

                if (tebakan == angkaRahasia)
                {
                    cout << "Selamat! Tebakan Anda benar!" << endl;
                    return true;
                }
                else
                {
                    kesempatan--;
                    cout << "Tebakan Anda salah. ";
                    if (tebakan < angkaRahasia) cout << "Angka terlalu rendah.";
                    else cout << "Angka terlalu tinggi.";
                    cout << " Sisa kesempatan: " << kesempatan << endl;
                    return false;
                }
            }

            bool gameOver()
            {
                if (kesempatan == 0)
                {
                    cout << "Kesempatan habis! Angka yang benar adalah " << angkaRahasia << endl;
                    return true;
                }
                return false;
            }
        };




//// Deskripsi :
    int main()
    {
        char ulang;
        GameData jankenData;

        do
        {
             //membuat validasi input saat memilih game
            bool validInput = false;
            while (!validInput) {
            system("cls");
            game = '\0';
            pemilihan();
            cin >> game;

            if (game == 'A' || game == 'B' || game == 'C') {
                validInput = true;
            } else {
                cout << "Input tidak valid. Silakan masukkan huruf A, B, atau C.\n";
                cin.clear();
                cin.ignore();
                cout << "Tekan Enter untuk mencoba lagi...";
                cin.get();
            }
        }

            jankenData.skorPemain = 0;
            jankenData.skorKomputer = 0;
            jankenData.kesempatan = 3;
            jankenData.pilihanPemain = '\0';

            switch (game)
            {
                case 'A':
                    system("cls");
                    Aturan_janken();
                    playJanken(jankenData);
                    break;


                case 'B':
                    system("cls");
                    TicTacToe game;
                    game.init();

                    do
                    {
                        Aturan_Tictactoe();
                        game.papan();
                        cout << "Pemain " << game.pemain << ", masukkan angka (1-9): ";
                        int pilih;
                        cin >> pilih;

                        if (game.input(pilih))
                        {
                            game.status = game.checkmenang();
                            if (game.status == -1) game.gantiGiliran();
                        }
                    } while (game.status == -1);

                    Aturan_Tictactoe();
                    game.papan();
                    if (game.status == 1)
                    {
                        cout << "Selamat! Pemain " << game.pemain << " menang!\n";
                    }
                    else
                    {
                        cout << "Permainan berakhir seri.\n";
                    }
                    break;


                case 'C':
                    system("cls");
                    Aturan_Tebak_angka();
                    TebakAngka games;
                    games.inisiasi();

                    cout << "Selamat datang di permainan Tebak Angka!" << endl;
                    games.tampilkanStatus();

                    while (games.kesempatan > 0)
                    {
                        if (games.tebakAngka())
                        {
                            break;
                        }
                        if (games.gameOver())
                        {
                            break;
                        }
                    }


                default:
                    cout << " ";
            }

            cout << "Apakah Anda ingin bermain lagi? (Y/T): ";
            cin >> ulang;

        } while (ulang == 'Y' || ulang == 'y');

        cout << "Terima kasih telah bermain!" << endl;

        return 0;
    }
