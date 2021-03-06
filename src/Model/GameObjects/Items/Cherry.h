#ifndef PACMAN_CHERRY_H
#define PACMAN_CHERRY_H


#include "ScoreBonus.h"
#include "Model/GameTimer.h"
#include "Model/GameMap.h"

/**
 * @brief Valuable bonus which appears randomly
 */
class Cherry
        : public ScoreBonus
{
public:
    explicit Cherry(Game *game);

    virtual void performActions() override;

private:
    GameTimer timer;

};


#endif //PACMAN_CHERRY_H
