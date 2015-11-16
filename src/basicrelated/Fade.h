#pragma once
#include "Common.h"

class Fade
{
public:

	Fade();
	void UpDate();
	void Draw();
	void SetUp();

	bool FadeIn(float speed,
		float red, float green, float blue);

	bool FadeOut(float speed,
		float red, float green, float blue);

private:

	Color fade_color;

	Vec2f pos;
	Vec2f size;

};