#include "Map.h"

Map::Map():
stage_img("res/m_space.png")
{
	SetUp();
}

void Map::SetUp()
{
	pos = Vec2f(0, 0);
	size = Vec2f(32, 32);
}

void Map::UpDate()
{



}

void Map::Draw()
{

	for (int iy = 0; iy < MAP_HEIGHT; ++iy){
		for (int ix = 0; ix < MAP_WIDTH; ++ix){
			drawFillBox(pos.x()*ix, pos.y()*iy, size.x(), size.y(), Color::red);
		}
	}
	std::cout << pos.x() << std::endl;
}