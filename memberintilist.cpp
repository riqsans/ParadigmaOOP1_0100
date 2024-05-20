#include <iostream>
using namespace std;


class Mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    Mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai)
    {
        
    }

    ~Mahasiswa(){
        cout << "Id = " << id << endl;
        
    }
}