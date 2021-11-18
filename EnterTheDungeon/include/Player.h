#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        int Hp{0};
        int Damage{0};
        int Gold{0};
        int largeurposition;
        int hauteurposition;
        Player(int, int, int, int, int);
        virtual ~Player();


    protected:

    private:
};

#endif // PLAYER_H
