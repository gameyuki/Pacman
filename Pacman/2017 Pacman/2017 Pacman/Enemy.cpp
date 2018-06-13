#include<Windows.h>
#include<d3dx9.h>
#include<d3d9.h>
#include"main.h"

CHARCTER_STATE g_Enemy_1 = {280,420,16.f};

//void Enemydraw()
//{
//	CUSTOMVERTEX Enemy_1[]
//	{
//		{ g_Enemy_1.x - g_Enemy_1.scale, g_Enemy_1.y - g_Enemy_1.scale, 1.f, 1.f, 0xFFFFFFFF, 0.f, 0.f },
//		{ g_Enemy_1.x + g_Enemy_1.scale, g_Enemy_1.y - g_Enemy_1.scale, 1.f, 1.f, 0xFFFFFFFF, 1.f, 0.f },
//		{ g_Enemy_1.x + g_Enemy_1.scale, g_Enemy_1.y + g_Enemy_1.scale, 1.f, 1.f, 0xFFFFFFFF, 1.f, 1.f },
//		{ g_Enemy_1.x - g_Enemy_1.scale, g_Enemy_1.y + g_Enemy_1.scale, 1.f, 1.f, 0xFFFFFFFF, 0.f, 1.f }
//	};
//
//	g_pD3Device->SetTexture(0, g_pTexture[ENEMY_1_TEX]);
//	g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, Enemy_1, sizeof(CUSTOMVERTEX));
//}