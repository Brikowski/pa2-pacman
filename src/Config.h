#ifndef PACMAN_CONFIG_H
#define PACMAN_CONFIG_H


#include <cstdint>

namespace Config
{
    const char MAP_FILE_SYMBOL_WALL = 'H';
    const char MAP_FILE_SYMBOL_SPACE = ' ';
    const char MAP_FILE_SYMBOL_STARTPOS = 'P';
    const char MAP_FILE_SYMBOL_SPAWNPOINT = 'S';

    const double PLAYER_BASE_SPEED = 1.5;
    const uint32_t PLAYER_MOUTH_PERIOD_MSECS = 500;

    const uint32_t CYCLE_TIME_MSECS = 50;
}


#endif //PACMAN_CONFIG_H
