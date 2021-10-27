#include <iostream>
#include <string>

#include "Weapon.hpp"

using namespace std;

Weapon::Weapon(string name = "Weapon", double power = 0)
{
  setName(name);
  setPower(power);
}

// Setter
void Weapon::setName(string name)
{
  this->name = name;
}

void Weapon::setPower(double power)
{
  this->power = power;
}

// Getter
string Weapon::getName()
{
  return this->name;
}

double Weapon::getPower()
{
  return this->power;
}

// Display
void Weapon::display()
{
  cout << "Weapon Name\t: " << getName() << endl;
  cout << "Weapon Power\t: " << getPower() << endl;
}
