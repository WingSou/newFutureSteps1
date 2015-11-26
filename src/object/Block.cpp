#include "Block.h"

Block::Block()
{

}

Block::~Block()
{

}

void Block::SetUp(Vec2f pos, Vec2f size)
{
	this->pos = pos;
	this->size = size;
}

Vec2f Block::getPos()
{
	return pos;
}

Vec2f Block::getSize()
{
	return size;
}

//“–‚½‚è”»’è‚Æ‚ß‚èž‚ñ‚¾·•ª‚ðŒvŽZ‚µ‚Ä–ß‚·ˆ—‚ð‚µ‚Ü‚·
//ƒLƒƒƒ‰ƒNƒ^[‚È‚Ç‚Ìpos		Vec2fŒ^
//ƒLƒƒƒ‰ƒNƒ^[‚È‚Ç‚Ìsize		Vec2fŒ^
//ã‚ÉƒuƒƒbƒN‚ª‚ ‚é‚Æ‚«‚Í”»’è‚ðÁ‚·‚½‚ß‚É‚O‚ð‚¢‚ê‚Ü‚·		intŒ^
//‰º‚ÉƒuƒƒbƒN‚ª‚ ‚é‚Æ‚«‚Í”»’è‚ðÁ‚·‚½‚ß‚É‚O‚ð‚¢‚ê‚Ü‚·		intŒ^
Vec2f Block::Collision(Vec2f _pos, Vec2f _size, float movement,
	bool up, bool down)
{
	if (isHitRect(pos, size, _pos, _size)){

		if (_pos.y() >= pos.y() + size.y() - movement * up){
			return Vec2f(0, (pos.y() + size.y()) - _pos.y());
		}
		if (_pos.y() + _size.y() <= pos.y() + movement * down){
			return Vec2f(0, pos.y() - (_pos.y() + _size.y()));
		}
		if (_pos.x() + _size.x() / 2 <= pos.x() + size.x() / 2){
			return Vec2f(pos.x() - (_pos.x() - _size.x()), 0);
		}
		if (_pos.x() + size.x() / 2 >= pos.x() + size.x() / 2){
			return Vec2f((pos.x() + size.x()) - _pos.x(), 0);
		}

	}
	return Vec2f::Zero();
}