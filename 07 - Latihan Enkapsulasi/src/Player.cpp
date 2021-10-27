#include <iostream>
#include <string>
#include <time.h>

#include "Player.hpp"

using namespace std;

Player::Player(string name)
{
  setName(name);
}

// Setter
void Player::setName(string name = "Player")
{
  this->name = name;
  this->health = 100;
}

void Player::setWeapon(Weapon *weapon)
{
  this->weapon = weapon;
}

//Getter
string Player::getName()
{
  return this->name;
}

string Player::getWeaponName()
{
  return this->weapon->getName();
}

double Player::getWeaponPower()
{
  return this->weapon->getPower();
}

// Display
void Player::display()
{
  cout << "Player Name\t: " << getName() << endl;
  cout << "Player Health\t: " << this->health << endl;
  if (this->weapon != 0)
  {
    this->weapon->display();
  }
}

// Other
void Player::attack(Player *player)
{
  if (player->health <= 0)
  {
    cout << this->name << " cant attack. " << player->name << " has died" << endl;
  }
  else
  {
    if (this->health <= 0)
    {
      cout << this->name << " has died. " << this->name << " cant attack" << endl;
    }
    else
    {
      srand(rand());
      if (((rand() % 10) + 1) > 5)
      {
        cout << this->name << " attack " << player->name << endl;
        player->defence(this->getWeaponPower());
      }
      else
      {
        cout << this->name << " failed to attack " << player->name << endl;
      }
    }
  }
}

void Player::defence(double damage)
{
  this->health -= damage;
  cout << this->name << " get " << damage << " damage" << endl;
  if (this->health <= 0)
  {
    cout << this->name << " has died " << endl;
  }
}

void Player::reset()
{
  this->health = 100;
}