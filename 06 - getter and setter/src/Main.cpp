#include <iostream>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  string name;

  cout << "Masukkan Nama Karakter : ";
  getline(cin, name);

  Player *player1 = new Player(name);

  bool exit = false;
  int menu;

  system("cls");

  do
  {
    player1->display();
    cout << "1. Attack Monster 1" << endl;
    cout << "2. Attack Monster 2" << endl;
    cout << "3. Attack Monster 3" << endl;
    cout << "4. Attack Monster 4" << endl;
    cout << "5. Keluar Permainan" << endl;
    cout << "-----------------------------" <<endl;
    cout << "Pilihan : ";
    cin >> menu;
    system("cls");
    switch (menu)
    {
    case 1:
      player1->addExp(rand() % 15 + 30);
      break;
    case 2:
      player1->addExp(rand() % 1 + 15);
      break;
    case 3:
      player1->addExp(rand() % 5 + 20);
      break;
    case 4:
      player1->addExp(rand() % 30 + 60);
      break;
    case 5:
      exit = true;
      break;
    default:
      cout << "Masukkan Pilihan Menu!" << endl;
      break;
    }
  } while (exit == false);

  cout << "Tekan Tombol Sembarang Untuk Keluar!";
  char ch;
  ch = cin.get();
  system("cls");

  return 0;
}
