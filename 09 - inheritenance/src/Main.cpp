#include <iostream>

using namespace std;

class Chef
{
public:
  void makeChicken()
  {
    cout << "The chef makes chicken" << endl;
  }
  void makeSalad()
  {
    cout << "The chef makes salad" << endl;
  }
  void makeSpecialDish()
  {
    cout << "The chef makes burger" << endl;
  }
};

class ItalianChef : public Chef
{
public:
  void makePasta()
  {
    cout << "The chef makes pasta" << endl;
  }
  void makeSpecialDish()
  {
    cout << "The chef makes pizza" << endl;
  }
};

int main(int argc, char const *argv[])
{
  Chef chef;
  ItalianChef italianChef;

  chef.makeChicken();
  chef.makeSpecialDish();

  italianChef.makeChicken();
  italianChef.makePasta();
  italianChef.makeSpecialDish();
  return 0;
}
