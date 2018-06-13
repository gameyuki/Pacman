#ifndef	COLLISION_H
#define COLLISION_H

/*キャラクターのx.y.scaleがあるので名前を変えてSTATEにしてもいい*/
struct Circle
{
	float x, y;		/*x,yの中心座標*/
	float r;		/*円の半径*/
};

//構造体を作ってそれで矩形同士の当たり判定を作る。
struct RectangleCC
{
	float x;
	float y;
	float x2;
	float y2;
};

bool collisionKK(RectangleCC a, RectangleCC b);

#endif