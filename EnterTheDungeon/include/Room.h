#ifndef ROOM_H
#define ROOM_H

enum class TypeRoom
{
    Ennemy,
    Treasure,
    Empty,
};

class Room
{
    public:
        Room(TypeRoom);
        virtual ~Room();

    protected:
        TypeRoom Type;

    private:
};

#endif // ROOM_H
