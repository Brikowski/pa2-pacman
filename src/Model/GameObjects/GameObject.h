#ifndef PACMAN_GAMEOBJECT_H
#define PACMAN_GAMEOBJECT_H


#include <cstdint>

class Game;

class GameObject
{
public:
    explicit GameObject(const double posX, const double posY, const double size, Game *game);

    virtual const bool performActions() = 0;

    const double getPosX() const;

    const double getPosY() const;

    const double getSize() const;

protected:
    const double getCenteredPos(const double squarePos);

    Game *game;

    double posX;
    double posY;

private:
    const double size;

};


#endif //PACMAN_GAMEOBJECT_H
