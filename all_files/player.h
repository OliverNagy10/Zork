#ifndef Player_H
#define Player_H         //basic pre-processor directive
#include <vector>
#include "item.h"
#include "Character.h"

class Player : public Character
{
public:
    std::string food;
    void addItem(Item *item);
    Player(std::string name, int health, double hitChance, std::string food);
    Player();
    std::vector <Item*> getItemsInCharacter()const;
    void setCurrentItem(Item item);
    Item getCurrentItem()const;
    ~Player();

private:

    std::vector <Item*> itemsInCharacter;
    Item currentItem;

};

#endif // Player_H


