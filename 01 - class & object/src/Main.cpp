#include <iostream>

using namespace std;

class Mahasiswa
{
public:
  string nama;  // string jika tidak diisi akan berisi kosong atau null
  string nim;
  const char* jurusan; // const char* jika tidak diisi akan berisi karakter
  double ipk; // jika tidak diisi akan bernilai angka random
};

int main(int argc, char const *argv[])
{
  Mahasiswa mahasiswa1;
  Mahasiswa mahasiswa2;
  mahasiswa1.nama = "Ichsan Nulmuhlis";
  mahasiswa1.nim = "10120724";
  mahasiswa1.jurusan = "Teknik Informatika";
  mahasiswa1.ipk = 4.0;

  cout << mahasiswa1.nama << endl;
  cout << mahasiswa1.nim << endl;
  cout << mahasiswa1.jurusan << endl;
  cout << mahasiswa1.ipk << endl;

  cout << endl;

  cout << mahasiswa2.nama << endl;
  cout << mahasiswa2.nim << endl;
  cout << mahasiswa2.jurusan << endl;
  cout << mahasiswa2.ipk << endl;

  return 0;
}
