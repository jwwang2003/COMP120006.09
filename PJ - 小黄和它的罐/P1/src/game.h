//
//  game.h
//  P1
//
//  Created by Jun Wei Wang on 2022-11-01.
//

// REFACTORED!

#ifndef game_h
#define game_h

#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <ctype.h>

#include "constants.h"
#include "player.h"
#include "map.h"
#include "command.h"

typedef struct {
    int score;
    int moves;
    char hint1[STRLEN];
    char hint2[STRLEN];
} Game;

void initGame(Game *game);

int run(Game *game, Map *map, Player *player);

//void showWelcome(int h, int w);
#endif /* game_h */
