#include "Fade.h"

Fade::Fade()
{
	SetUp();
}

void Fade::SetUp()
{
	fade_color = Color(0,0,0,1);
}

bool Fade::FadeIn(float speed,
	float red, float green, float blue)
{
	fade_color.r() = red;
	fade_color.g() = green;
	fade_color.b() = blue;

	fade_color.a() -= speed;

	if (fade_color.a() <= 0)
	{
		return  true;
	}
	return false;
}

bool Fade::FadeOut(float speed,
	float red, float green, float blue)
{
	fade_color.r() = red;
	fade_color.g() = green;
	fade_color.b() = blue;

	fade_color.a() += speed;

	if (fade_color.a() >= 1)
	{
		SetUp();
		return  true;
	}
	return false;
}

void Fade::Draw()
{
	drawFillBox(-WIDTH / 2, -HEIGHT / 2, WIDTH, HEIGHT,
		Color(fade_color.r(), fade_color.g(), fade_color.b(), fade_color.a()));
}