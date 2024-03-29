//
//  player.h
//  P1
//
//  Created by Jun Wei Wang on 2022-10-01.
//

// REFACTORED!

#ifndef player_h
#define player_h

#include <stdlib.h>
#include <stdio.h>

#include "constants.h"
#include "map.h"

typedef struct {
    int y;
    int x;
} Player;

Player *initPlayer(void);

int movePlayerRandom(Map *m, Player *p);
int movePlayerUp(Map *m, Player *p);
int movePlayerDown(Map *m, Player *p);
int movePlayerLeft(Map *m, Player *p);
int movePlayerRight(Map *m, Player *p);

int hasJar(Map *m, int y, int x);
int pickUpJar(Map *m, Player *p);

void freePlayer(Player *player);

#endif /* player_h */
