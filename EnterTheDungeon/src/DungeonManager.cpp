#include "DungeonManager.h"
#include <iostream>
using namespace std;

DungeonManager::DungeonManager()
{
    std::vector<std::vector<int>> DungeonMap =
 {

 {0, 0, 0, 0 },
 {1, 0, 1, 0 },
 {0, 2, 0, 2 },

 };

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
}

 void DungeonManager::CurrentRoomDescription(int hauteur, int largeur)
{
    if(Dungeon[hauteur][largeur]->Type == TypeRoom::Ennemy)
    {
        cout << "Attention un ennemi est present dans cette salle ! " <<  endl;
    }
    else if(Dungeon[hauteur][largeur]->Type == TypeRoom::Empty)
    {
        cout<< " Cette salle est vide. " <<  endl;
    }
    else if(Dungeon[hauteur][largeur]->Type == TypeRoom::Treasure)
    {
        cout<< " Incroyable ! il y a un tresor dans cette piece ! " << endl;
    }
}


void DungeonManager::DirectionChoice(int &hauteur, int &largeur, bool &End)
{
while (End == false)
{
        CurrentRoomDescription(hauteur, largeur);
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
        default :
            cout << "Veuillez Rentrer une direction valide s'il vous plait ! " <<  endl;
            break;

        }
}

}
DungeonManager::~DungeonManager()
{
    //dtor
}
