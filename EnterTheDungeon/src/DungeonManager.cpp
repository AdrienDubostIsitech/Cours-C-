#include "DungeonManager.h"
#include <iostream>
#include "Player.h"
using namespace std;

DungeonManager::DungeonManager(std::vector<std::vector<int>> Map)
{
    Map =
 {

 {0, 0, 0, 0 },
 {1, 0, 1, 0 },
 {0, 2, 0, 2 },

 };

 DungeonMap = Map;

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

 void DungeonManager::CurrentRoomDescription(int hauteur, int largeur, Player *player, bool &End)
{
    if(Dungeon[hauteur][largeur]->Type == TypeRoom::Ennemy)
    {
        cout << "Attention un ennemi est present dans cette salle ! " <<  endl;
        AttackChoice(player, End);
    }
    else if(Dungeon[hauteur][largeur]->Type == TypeRoom::Empty)
    {
        cout<< " Cette salle est vide. " <<  endl;
    }
    else if(Dungeon[hauteur][largeur]->Type == TypeRoom::Treasure)
    {
        cout<< " Incroyable ! il y a un tresor dans cette piece ! " << endl;
        GetTreasure(player);
    }
}


void DungeonManager::DirectionChoice(int &hauteur, int &largeur, bool &End, Player *player)
{
while (End == false)
{

        CurrentRoomDescription(hauteur, largeur, player, End);
        Dungeon[hauteur][largeur]->Type = TypeRoom::Empty;
        cout << " Vous etes sur la case : " << "[" <<hauteur << "]" << " " << "[" << largeur << "]" << endl;
        cout << " Vous pouvez vous deplacer au :"<< endl;

        if(hauteur > BORNE_NORD)
        {
            cout << "Nord," << " ";
        }
        if(hauteur < BORNE_SUD)
        {
            cout << "Sud," << " ";
        }
        if(largeur > BORNE_WEST)
        {
            cout << "Ouest," << " ";
        }
        if(largeur < BORNE_EAST)
        {
            cout << "Est," << " ";
        }
        cout << endl;
        cout <<endl;
        cout << "Dans quelle Direction voulez-vous aller ?" << endl;
        cout <<endl;
        cout << "Vous pouvez aussi quitter le Donjon en Appuyant sur Q" << endl;
        char Dir;
        cin >> Dir;
        switch(Dir)
        {
        case 'N':
            {
                if(hauteur > 0)
                {
                    hauteur--;
                    //player->hauteurposition--;

                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous deplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'S':
            {
                if(hauteur < 2)
                {
                    hauteur++;
                    //player->hauteurposition++;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous deplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'O':
            {
                if(largeur > 0)
                {
                    largeur--;
                    //player->largeurposition--;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous deplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'E':
            {
                if(largeur < 4)
                {
                    largeur++;
                    //player->largeurposition++;
                    break;
                }
                else
                {
                    cout << "Vous ne pouvez pas vous deplacer dans cette direction ! " << endl;
                    break;
                }
            }
        case 'Q':
            {
                End = true;
                break;
            }
        default :
            cout << "Veuillez Rentrer une direction valide s'il vous plait ! " <<  endl;
            break;
        }
}

}

void DungeonManager::Combat(Player *player, Ennemy *ennemy, bool &End)
{
    while(player->Hp > 0 || ennemy->Hp > 0)
    {
        cout << " Vous attaquez !" << endl;
        cout << endl;
        ennemy->Hp -= player->Damage;
        if(ennemy->Hp < 0)
            break;
        cout << " On vous attaque !" << endl;
        cout << endl;
        player->Hp -= ennemy->Damage;
        if(player->Hp <0)
            break;
    }
    if(player->Hp < 0)
    {
        cout << " vous avez perdu ! " << endl;
        End = true;
    }
    else
    {
            cout << "Vous avez gagne ! " << endl;
            player->Gold += ennemy->Gold;
            cout << " Votre or s'eleve a : " << player->Gold << endl;

    }
}

void DungeonManager::AttackChoice(Player *player, bool &End)
{
    Ennemy* ennemy;
    int IndexEnnemy = rand() % 5;
    if(IndexEnnemy >= 0 && IndexEnnemy <= 3)
    {
            ennemy = new Ennemy(EnnemyType::RAT, 10, 3, 2);
            cout << "Un rat vous attaque ! " << endl;
    }
    else if (IndexEnnemy > 3 && IndexEnnemy <= 4)
    {
            ennemy = new Ennemy(EnnemyType::SQUELETTE, 25, 10, 10);
            cout << "Attention un Squelette vous attaque " << endl;
    }
    else if (IndexEnnemy == 5)
    {
            ennemy = new Ennemy(EnnemyType::DRAGON, 40, 25, 150);
            cout << "Vous êtes attaque par un dragon !" <<endl;
    }
    char Attack;
    cout << "Appuyez sur F pour attaquer !" << endl;
    cin >> Attack;
    switch(Attack)
    {
        case 'F':
        {
            Combat(player, ennemy, End);
            //Dungeon[player->hauteurposition][player->largeurposition]->Type == TypeRoom::Empty;
            break;
        }
        default:
            cout << "Vous ne Pouvez pas fuir, vous devez vous battre" << endl;
            AttackChoice(player, End);
    }
}

void DungeonManager::GetTreasure(Player *player)
{
    char Take;
    cout << "Appuyez sur F pour prendre le tresor" << endl;
    cin >> Take;
    switch(Take)
    {
    case 'F':
        {
            int x = rand() % 200 +75;
            player->Gold += x;
            cout << "Vous avez gagné " << x << " pièces d'or ! " <<endl;
            cout << "Votre or s'eleve a :" << player->Gold << endl;
            break;
        }
    default:
        cout << "Vous n'allez pas laisser ce tresor ici ?!" << endl;
        GetTreasure(player);
    }


}
DungeonManager::~DungeonManager()
{

}
