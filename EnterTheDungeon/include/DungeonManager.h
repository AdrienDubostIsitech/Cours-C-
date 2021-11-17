#ifndef DUNGEONMANAGER_H
#define DUNGEONMANAGER_H
#include <vector>
#include "Room.h"

class DungeonManager
{
    public:
        std::vector<std::vector<int>> DungeonMap;
        std::vector<std::vector<Room*>> Dungeon;
        DungeonManager();
        virtual ~DungeonManager();
        void CurrentRoomDescription(int hauteur, int largeur);
        void DirectionChoice(int &hauteur, int &largeur, bool &End);

    protected:

    private:
};

#endif // DUNGEONMANAGER_H
