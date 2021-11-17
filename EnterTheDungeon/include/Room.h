#ifndef ROOM_H
#define ROOM_H

enum class TypeRoom
{
    Ennemy = 'E',
    Treasure = 'T',
    Empty = 'V',
};

class Room
{
    public:
        Room(TypeRoom);
        virtual ~Room();
        TypeRoom Type;

    protected:


    private:
};

#endif // ROOM_H
