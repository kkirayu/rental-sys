#include <iostream>
using namespace std;

struct RentalKendaraan
{
    string nama;
    int unit, tanggalpeminjaman, tanggalpengembalian;
    RentalKendaraan *next;
} ;

int main() {
    RentalKendaraan *node1, *node2, *node3;
    
    cout << "Hello, World!" << endl;
    return 0;
}
