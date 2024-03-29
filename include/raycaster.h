
#ifndef RAYCASTER_H
#define RAYCASTER_H

#include <tonc.h>
#include "render.h"
#include "structs.h"
#include "utils.h"
#include "dungeon.h"
#include "lut.h"
#include "audio.h"

#define FLOORCOLOR 131
#define ROOFCOLOR 1

extern const int HALFSCREENPOINT;

extern FIXED dirX, dirY;
extern FIXED planeX, planeY;

/// @brief draw a two pixel wide column on screen, inc. roof, wall and floor
/// @param i column (0-240), use even numbers
/// @param distance distance to the wall (determines wall height)
/// @param type wall texture (indexed from 1)
/// @param vertical true if wall is vertical in 2d map space
/// @param textureColumn which column of the texture is to be read
void drawWall(int i, FIXED distance, int type, int vertical, int textureColumn);

void drawWallCroppedTop(int i, FIXED distance, int type, int vertical, int textureColumn);
void drawWallCroppedBottom(int i, FIXED distance, int type, int vertical, int textureColumn);


/// @brief similar idea to drawWall, but instead draw only floor and ceiling
/// @param i column on screen (0-240), use even numbers
void drawWithoutWall(int i);

/// @brief main raycast method. Loops through the columns of screen (120 even numbers, when at half resolution)
void castRays();

int castRay(int targetType, FIXED dirX, FIXED dirY);

bool castForward(FIXED dirX, FIXED dirY);

#endif // RAYCASTER_H