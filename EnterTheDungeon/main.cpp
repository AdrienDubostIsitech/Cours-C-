#include <iostream>
#include <vector>
#include "Room.h"
#include "time.h"
#include "DungeonManager.h"

using namespace std;

bool End {false};
int hauteur {1};
int largeur {1};

int main()
{
 cout<<" ------------------------------- Welcome ---------------------------------"<<endl;
 cout<<" ---------------------------- To The Dungeon -----------------------------"<<endl;

 if(hauteur | largeur)
 {
    cout << "oui" << endl;
 }
if(hauteur && largeur)
 {
    cout << "oui" << endl;
 }
std::vector<vector<int>> Map;
srand(time(NULL));
DungeonManager* Dungeon = new DungeonManager(Map);
Player* player = new Player(100, 50, 0, hauteur, largeur);

 Dungeon->DirectionChoice(hauteur, largeur, End, player);


}
