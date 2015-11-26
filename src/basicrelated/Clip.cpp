#include "Clip.h"

int animation_count1 = 0;

void Clip::Animation(Vec2f pos, Vec2f size, Texture& text, Direction dir, int& animation_count, float default_size)
{
	animation_count += 1;
	animation_index = (animation_count / 10) % 4;

	if (dir == Direction::MOVE_RIGHT)
	{
		int index_tbl[] = { 8, 6, 8, 6 };
		x_offset = (index_tbl[animation_index] % 3) * default_size;
		y_offset = (index_tbl[animation_index] / 3) * default_size;
		drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), x_offset, y_offset, default_size, default_size, text);
	}

	if (dir == Direction::MOVE_LEFT)
	{
		int index_tbl[] = { 9, 11, 9, 11 };
		x_offset = (index_tbl[animation_index] % 3) * default_size;
		y_offset = (index_tbl[animation_index] / 3) * default_size;
		drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), x_offset, y_offset, default_size, default_size, text);
	}

	if (dir == Direction::MOVE_UP)
	{
		int index_tbl[] = { 3, 5, 3, 5 };
		x_offset = (index_tbl[animation_index] % 3) * default_size;
		y_offset = (index_tbl[animation_index] / 3) * default_size;
		drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), x_offset, y_offset, default_size, default_size, text);
	}

	if (dir == Direction::MOVE_DOWN)
	{
		int index_tbl[] = { 0, 2, 0, 2 };
		x_offset = (index_tbl[animation_index] % 3) * default_size;
		y_offset = (index_tbl[animation_index] / 3) * default_size;
		drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), x_offset, y_offset, default_size, default_size, text);
	}
}