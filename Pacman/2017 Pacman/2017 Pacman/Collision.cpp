#include<Windows.h>
#include"Collision.h"

bool collisionKK(RectangleCC a, RectangleCC b)
{

	if ((a.x < b.x2) && (b.x < a.x2) && (a.y < b.y) && (b.y < a.y2))
	{
		return true;
	}
	else
	{
		return false;
	}
}