#include <iostream>
#include "Player.hpp"
using namespace std;

Player::Player(string name = "player")
{
  this->name = name;
  this->attackPower = 100;
  this->level = 1;
  this->exp = 0;
}

void Player::display()
{
  cout << "----------------------------------" << endl;
  cout << "Name \t: " << this->name << endl;
  cout << "Level\t: " << this->level << endl;
  cout << "EXP  \t: " << this->exp << endl;
  cout << "Attack Power " << this->attackPower << endl;
  cout << "----------------------------------" << endl;
}

// getter, red-only data
string Player::getName()
{
  return this->name;
}

// setter, edit data
void Player::addExp(int expValue = 0)
{
  cout << "+" << expValue << " exp" << endl;
  int maxExp = 100;
  this->exp += expValue;
  if (this->exp >= 100)
  {
    system("cls");
    cout << "- LEVEL UP -" << endl;
    this->level++;
    this->attackPower += this->attackPower * 0.5;
    this->exp -= 100;
  }
}