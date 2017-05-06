#ifndef PACMAN_ITEM_H
#define PACMAN_ITEM_H


#include "../GameObject.h"

class Game;

class Item
    : public GameObject
{
public:
    explicit Item(const double posX, const double posY, const double size, Game *game);

    virtual const bool performActions() override;
};


#endif //PACMAN_ITEM_H