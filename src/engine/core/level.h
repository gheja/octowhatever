#ifndef ENGINE_CORE_LEVEL_H
#define ENGINE_CORE_LEVEL_H

typedef struct _level
{
	INT16 scroll_x;
	INT16 scroll_y;
	INT16 scroll_x_min, scroll_x_max;
	INT16 scroll_y_min, scroll_y_max;
	game_tile *tiles;
	game_object *objects;
} level;

#endif
