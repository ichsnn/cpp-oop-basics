#ifndef __PLAYER
#define __PLAYER

#include <iostream>

using namespace std;

class Player
{
private:
  string name;
  double attackPower;
  int level;
  int exp;

public:
  Player(string name);

  void display();

  // getter, red-only data
  string getName();

  // setter, edit data
  void addExp(int);
};

#endif