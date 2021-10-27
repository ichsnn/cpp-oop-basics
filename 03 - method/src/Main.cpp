#include <iostream>

using namespace std;

class Mahasiswa
{
private:
  /* data | atribute */
  string nama;
  string nim;
  string jurusan;
  double ipk;

public:
  Mahasiswa(string nama, string nim, string jurusan, double ipk)
  {
    Mahasiswa::nama = nama;
    Mahasiswa::nim = nim;
    Mahasiswa::jurusan = jurusan;
    Mahasiswa::ipk = ipk;
  }

  void setNama(string nama)
  {
    Mahasiswa::nama = nama;
  }

  void setNim(string nim)
  {
    Mahasiswa::nim = nim;
  }

  void setJurusan(string jurusan)
  {
    Mahasiswa::jurusan = jurusan;
  }

  void setIpk(double ipk)
  {
    Mahasiswa::ipk = ipk;
  }

  string getNama()
  {
    return Mahasiswa::nama;
  }

  string getNim()
  {
    return Mahasiswa::nim;
  }

  string getJurusan()
  {
    return Mahasiswa::jurusan;
  }

  double getIpk()
  {
    return Mahasiswa::ipk;
  }

  void print()
  {
    cout << "Nama    \t: " << Mahasiswa::getNama() << endl;
    cout << "NIM     \t: " << Mahasiswa::getNim() << endl;
    cout << "Jurusan \t: " << Mahasiswa::getJurusan() << endl;
    cout << "IPK     \t: " << Mahasiswa::getIpk() << endl;
  }
};

int main(int argc, char const *argv[])
{
  Mahasiswa mahasiswa1 = Mahasiswa("ICHSAN NULMUHLIS", "10120724", "TEKNIK INFORMATIKA", 4.0);

  mahasiswa1.print();

  cout << endl;

  // ubah data
  mahasiswa1.setNama("Ucup");
  mahasiswa1.setNim("10120725");
  mahasiswa1.setJurusan("Teknik Permainan");
  mahasiswa1.setIpk(3.9);

  mahasiswa1.print();

  return 0;
}
