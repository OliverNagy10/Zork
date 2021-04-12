#ifndef Monster_H
#define Monster_H        // basic pre-processor directive
#include "Character.h"


class Monster : public  Character
{
public:
    Monster();
    Monster(std::string newName, int newHealth, double newHitChance);
    Monster(const Monster &obj);//copy constructor
    ~Monster();
};

#endif // Monster_H



