#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
// atribut
public:
  string nama;
  string nim;
  string jurusan;
  double ipk;

  // constructor
  Mahasiswa(string nama = "Ichsan Nulmuhlis", string nim = "10120724", string jurusan = "Teknik Informatika", double ipk = 0)
  {
    Mahasiswa::nama = nama;
    Mahasiswa::nim = nim;
    Mahasiswa::jurusan = jurusan;
    Mahasiswa::ipk = ipk;
  }
};

int main(int argc, char const *argv[])
{
  Mahasiswa mahasiswa[2];
  mahasiswa[1] = Mahasiswa("Ucup", "10120725", "Teknik Percintaan", 3.5);

  cout << mahasiswa[0].nama << endl;
  cout << mahasiswa[0].nim << endl;
  cout << mahasiswa[0].jurusan << endl;
  cout << mahasiswa[0].ipk << endl;
  cout << endl;
  cout << mahasiswa[1].nama << endl;
  cout << mahasiswa[1].nim << endl;
  cout << mahasiswa[1].jurusan << endl;
  cout << mahasiswa[1].ipk << endl;
  cout << endl;

  cout << sizeof(mahasiswa[0]) << endl;
  cout << sizeof(mahasiswa) << endl;

  cout << sizeof(double) << endl;

  return 0;
}
