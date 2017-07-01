#ifndef PACMAN_AGGRESSIVEGHOST_H
#define PACMAN_AGGRESSIVEGHOST_H


#include "Ghost.h"

/**
 * @brief A ghost that keeps following the player
 */
class AggressiveGhost
        : public Ghost
{
public:
    explicit AggressiveGhost(Game *game);

};


#endif //PACMAN_AGGRESSIVEGHOST_H
