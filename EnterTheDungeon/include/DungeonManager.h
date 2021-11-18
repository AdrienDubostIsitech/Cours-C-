#ifndef DUNGEONMANAGER_H
#define DUNGEONMANAGER_H
#include <vector>
#include "Room.h"
#include "Player.h"
#include "Ennemy.h"


        const auto BORNE_NORD{0};
        const auto BORNE_SUD{2};
        const auto BORNE_WEST{0};
        const auto BORNE_EAST{4};

class DungeonManager
{

    public:

        std::vector<std::vector<int>> DungeonMap;
        std::vector<std::vector<Room*>> Dungeon;
        DungeonManager(std::vector<std::vector<int>>);
        virtual ~DungeonManager();
        void CurrentRoomDescription(int hauteur, int largeur, Player *player, bool &End);
        void DirectionChoice(int &hauteur, int &largeur, bool &End, Player *player);
        void Combat(Player *player, Ennemy *ennemy, bool &End);
        void AttackChoice(Player *player, bool &End);
        void GetTreasure(Player *player);

    protected:

    private:

};

#endif // DUNGEONMANAGER_H
