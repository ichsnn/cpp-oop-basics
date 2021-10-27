#ifndef __PLAYER
#define __PLAYER

#include <iostream>
#include <string>

#include "Weapon.hpp"

using namespace std;

class Player
{
private:
  string name;
  double health;
  Weapon *weapon;

public:
  Player(string);

  // Setter
  void setName(string);
  void setWeapon(Weapon *);

  // Getter
  string getName();
  string getWeaponName();
  double getWeaponPower();

  // Display
  void display();

  // Other
  void attack(Player *);

  void reset();
  
private:
  void defence(double);
};

#endif