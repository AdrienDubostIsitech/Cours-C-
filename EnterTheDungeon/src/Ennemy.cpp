#include "Ennemy.h"

Ennemy::Ennemy(EnnemyType type, int Life, int DPS, int Money)
{
    Type = type;
    Hp = Life;
    Damage = DPS;
    Gold = Money;
}

Ennemy::~Ennemy()
{

}
