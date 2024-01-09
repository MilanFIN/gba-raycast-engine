#include <tonc.h>
#include "textures.h"

#define SCREENHEIGHT 135
#define SCREENWIDTH 240

FIXED CAMERAX_LU[SCREENWIDTH / 2] = {0};
FIXED TEXTURESTEP_LU[SCREENHEIGHT] = {0};

INLINE void m4_dual_plot(int x, int y, u8 clrid)
{
	vid_page[(y * M4_WIDTH + x) >> 1] = (clrid << 8) | clrid;
}

INLINE void m4_dual_vline(int x, int y1, int y2, u8 clrid)
{
	for (int i = y1; i <= y2; i++)
	{
		m4_dual_plot(x, i, clrid);
	}
}

// draw a textured vertical line to x column, between y1, y2
//  column defines which texture column is used
INLINE void m4_textured_dual_line(const int *textures, int x, int y1, int y2, int type, int vertical, int column, FIXED step)
{
	FIXED textureY = 0;
	for (int y = y1; y < y2; y++)
	{
		const int color = textures[(type - 1) * 256 + fx2int(textureY) * TEXTURESIZE + column] - vertical;
		m4_dual_plot(x, y, color);
		textureY = fxadd(textureY, step);
	}
}

// same as above, but supports transparency
INLINE void m4_sprite_textured_dual_line(const int *textures, int x, int y1, int y2, int type, int column, FIXED step)
{
	FIXED textureY = 0;
	for (int y = y1; y < y2; y++)
	{
		const int color = textures[(type - 1) * 256 + fx2int(textureY) * TEXTURESIZE + column];
		if (color != 0)
		{
			m4_dual_plot(x, y, color);
		}
		textureY = fxadd(textureY, step);
	}
}

// same as above, supports transparency, but all colors are replaced
// with flatColor (palette id)
INLINE void m4_sprite_color_textured_dual_line(const int *textures, int x, int y1, int y2, int type, int column, int flatColor, FIXED step)
{
	FIXED textureY = 0;
	for (int y = y1; y < y2; y++)
	{
		const int realColor = textures[(type - 1) * 256 + fx2int(textureY) * TEXTURESIZE + column];
		if (realColor != 0)
		{
			m4_dual_plot(x, y, flatColor);
		}
		textureY = fxadd(textureY, step);
	}
}

// draws a rectangular texture to arbitary point on screen
// texture as in id from TEXTURES
void drawFlat(const int *textures, int texture, int x, int y, int w, int h)
{
	FIXED textureX = 0;
	const FIXED xStep = TEXTURESTEP_LU[w];
	const FIXED yStep = TEXTURESTEP_LU[h];

	for (int x1 = x; x1 < x + w; x1++)
	{

		m4_sprite_textured_dual_line(textures, 2 * x1, y, y + h, texture, fx2int(textureX), yStep);
		textureX = fxadd(textureX, xStep);
	}
}

// same as above, but use a single color for visible parts of the texture
void drawFlatColorTexture(const int *textures, int texture, int x, int y, int w, int h, int color)
{
	FIXED textureX = 0;
	const FIXED xStep = TEXTURESTEP_LU[w];
	const FIXED yStep = TEXTURESTEP_LU[h];

	for (int x1 = x; x1 < x + w; x1++)
	{
		m4_sprite_color_textured_dual_line(textures, 2 * x1, y, y + h, texture, fx2int(textureX), color, yStep);
		textureX = fxadd(textureX, xStep);
	}
}