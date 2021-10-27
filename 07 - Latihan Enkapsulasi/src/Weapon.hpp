#ifndef __WEAPON
#define __WEAPON

using namespace std;

class Weapon
{
private:
  string name;
  double power;

public:
  Weapon(string name, double power);

  // Setter
  void setName(string name);

  void setPower(double power);

  // Getter
  string getName();

  double getPower();

  // Display
  void display();

};

#endif