#include <iostream>
#include <vector>
#include "Room.h"

using namespace std;

bool End {false};
int hauteur {1};
int largeur {1};

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

 while (End == false)
{
        cout << " Dans cette salle il y a : " << static_cast<char>(Dungeon[hauteur][largeur]->Type) << endl;


        cout << " Vous etes sur la case : " << "[" <<hauteur << "]" << " " << "[" << largeur << "]" << endl;
        cout << " Vous pouvez vous déplacer au :"<< endl;
        if(hauteur < 2)
        {
            cout << "Nord," << " ";
        }
        if(hauteur > 0)
        {
            cout << "Sud," << " ";
        }
        if(largeur > 0)
        {
            cout << "Ouest," << " ";
        }
        if(largeur < 4)
        {
            cout << "Est," << " ";
        }
        cout << endl;
        cout <<endl;
        cout << "Dans quelle Direction voulez-vous aller ?" << endl;
        char Dir;
        cin >> Dir;
        switch(Dir)
        {
        case 'N':
            {
                if(hauteur > 0)
                {
                    hauteur--;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous déplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'S':
            {
                if(hauteur < 2)
                {
                    hauteur++;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous déplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'O':
            {
                if(largeur > 0)
                {
                    largeur--;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous déplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'E':
            {
                if(largeur < 4)
                {
                    largeur++;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous déplacer dans cette direction ! " << endl;
                    break;
                }
            }
        }
}


}
