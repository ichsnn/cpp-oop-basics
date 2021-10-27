#include <iostream>

using namespace std;

class Player
{
private:
  string name;

public:
  Player(char const *name = "player")
  {
    cout << "Player Dibuat" << endl;
    Player::name = name;
  }

  string getName()
  {
    return Player::name;
  }

  // Destructor
  ~Player()
  {
    cout << "Player Dihapus" << endl;
  }
};

void membuatPlayerStack()
{
  Player stackPlayer = Player("stack");
}
void membuatPlayerHeap()
{
  Player *heapPlayer = new Player("heap");
  // delete manual
  delete heapPlayer;
}

void membuatPlayerStackPointer(Player *&playerPointer)
{
  Player stackPlayer = Player("stack");
  playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player *&playerPointer)
{
  Player *heapPlayer = new Player("heap");
  playerPointer = heapPlayer;
  delete heapPlayer;
}

int main(int argc, char const *argv[])
{

  membuatPlayerStack();
  membuatPlayerHeap();

  cout << endl;

  /* Simulasi Memory Leak */
  cout << "Memory Leak" << endl;
  // Player *playerPointer1;
  // membuatPlayerStackPointer(playerPointer1);
  // cout << (*playerPointer1).getName() << endl;

  cout << endl;

  Player *playerPointer2;
  membuatPlayerHeapPointer(playerPointer2);
  delete playerPointer2;
  cout << playerPointer2;
  // cout << playerPointer2->getName() << endl;

  return 0;
}
