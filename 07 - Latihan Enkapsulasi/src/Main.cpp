#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  Player *player1 = new Player("Sniper");
  Weapon *weapon1 = new Weapon("Senapan", 50);
  player1->setWeapon(weapon1);

  Player *player2 = new Player("Gun Man");
  Weapon *weapon2 = new Weapon("Shoot Gun", 20);
  player2->setWeapon(weapon2);

  int menu;

  do
  {
    cout << "Player 1" << endl;
    cout << "------------------------------------------" << endl;
    player1->display();
    cout << endl;
    cout << "Player 2" << endl;
    cout << "------------------------------------------" << endl;
    player2->display();
    cout << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "1. Player 1 Menyerang" << endl;
    cout << "2. Player 2 Menyerang" << endl;
    cout << "3. Reset Darah" << endl;
    cout << "4. Keluar Permainan" << endl;
    cout << endl;
    cout << "Masukkan Pilihan Menu : ";
    cin >> menu;
    system("cls");
    switch (menu)
    {
    case 1:
      player1->attack(player2);
      system("pause");
      break;

    case 2:
      player2->attack(player1);
      system("pause");
      break;

    case 3:
      player1->reset();
      player2->reset();
      cout << "Health has been reset..." << endl;
      system("pause");
      break;

    case 4:
      cout << "Keluar Permainan..." << endl;
      system("pause");
      break;

    default:
      break;
    }
    system("cls");
  } while (menu != 4);

  return 0;
}
