#ifndef PACMAN_ENEMY_H
#define PACMAN_ENEMY_H


#include "../MovableObject.h"

class Enemy
    : public MovableObject
{
public:
    explicit Enemy(const double posX, const double posY, const double speed, const double size, Game *game);
};


#endif //PACMAN_ENEMY_H