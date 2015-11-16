#pragma once
#include "../basicrelated/Common.h"

class Obstruction
{
  public:
	  Obstruction(Vec2f pos, Vec2f size);   
	  void Draw();    
	  Vec2f getPos();  
	  Vec2f getSize(); 
	  

  private:
	  Vec2f pos;
	  Vec2f size;
};