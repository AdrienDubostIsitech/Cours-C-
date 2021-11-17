#include <iostream>
#include <vector>
#include "Room.h"

using namespace std;



int main()
{
 cout<<" ------------------------------- Welcome ---------------------------------"<<endl;
 cout<<" ---------------------------- To The Dungeon -----------------------------"<<endl;

 std::vector<std::vector<int>> DungeonMap =
 {

 {0, 0, 0, 0 },
 {1, 0, 1, 0 },
 {0, 2, 0, 2 },

 };


std::vector<std::vector<Room*>> Dungeon;
cout << DungeonMap.size() << endl;
Dungeon.resize(DungeonMap.size());
 for(size_t i = 0; i < DungeonMap.size(); i++ )
 {
     Dungeon[i].resize(DungeonMap[i].size());
     cout << endl;
    for(size_t j = 0; j < DungeonMap[i].size() ; j++)
    {
        cout << DungeonMap[i][j] << "  ";
        int Index = DungeonMap[i][j];
        switch (Index)       {
            case 0:
            {
                Room* TempRoom = new Room(TypeRoom::Empty);
                Dungeon[i][j] = TempRoom;
                break;
            }
            case 1:
            {
                Room* TempRoom = new Room(TypeRoom::Ennemy);
                Dungeon[i][j] = TempRoom;
               break;
            }

            case 2:
            {
                Room* TempRoom = new Room(TypeRoom::Treasure);
                Dungeon[i][j] = TempRoom;
                break;
            }

            default :
                break;
       }
    }
 }


for(int i = 0; i < Dungeon.size(); i++)
 {
     cout << endl;
    for (int j = 0; j < Dungeon[i].size(); j++)
    {
        cout << static_cast<char>(Dungeon[i][j]->Type) << "   ";
    }
 }

}
