#ifndef ENNEMY_H
#define ENNEMY_H

enum class EnnemyType
{
    RAT,
    SQUELETTE,
    DRAGON

};
class Ennemy
{
    public:
        EnnemyType Type;
        int Hp;
        int Damage;
        int Gold;
        Ennemy(EnnemyType, int, int , int);
        virtual ~Ennemy();

    protected:

    private:
};

#endif // ENNEMY_H
