#include <iostream>
#include <vector>
#include "Room.h"
#include "DungeonManager.h"

using namespace std;

bool End {false};
int hauteur {1};
int largeur {1};

int main()
{
 cout<<" ------------------------------- Welcome ---------------------------------"<<endl;
 cout<<" ---------------------------- To The Dungeon -----------------------------"<<endl;



DungeonManager* Dungeon = new DungeonManager();

 Dungeon->DirectionChoice(hauteur, largeur, End);


}
