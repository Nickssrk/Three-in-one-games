#include <iostream>
using namespace std;


int Deret(int awalan, int akhiran, int jarak)
{
    int total = 0;
    int x = awalan;

    do {
        cout << x<<" + ";
        total += x;
        x += jarak;
    } while (x <= akhiran);

    cout << " = " << total << endl;
    return total;
}
void cetak()
{
    int total;
    cout<< "Jumlahnya= "<< total;
}

int main() {
    int awalan,akhiran,jarak;

    cout << "Masukkan awalan deret: ";
    cin >> awalan;
    cout << "Masukkan akhiran deret: ";
    cin >> akhiran;
    cout << "Masukkan jarak deret: ";
    cin >> jarak;
    int total = Deret(awalan,akhiran,jarak);
    cetak();

    return 0;
}
