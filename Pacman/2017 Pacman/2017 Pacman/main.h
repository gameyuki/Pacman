#ifndef MAIN_H
#define MAIN_H

#define SAFE_RELEASE(p){if(p){(p)->Release();(p)=NULL;}}

#include<windows.h>
#include<d3dx9.h>
#include<dsound.h>

struct CUSTOMVERTEX
{
	FLOAT	x, y, z, rhw;
	DWORD	color;
	FLOAT	tu, tv;
};

enum TEXTURE
{
	BACKGROUND_TEX,
	BACKGROUND_TEX2,
	PACMANLEFT_TEX,
	PACMANRIGHT_TEX,
	PACMANUP_TEX,
	PACMANDOWN_TEX,
	PACMAN_EX_TEX,
	PACMAN_EX2_TEX,
	ENEMY_1_TEX,
	MAP_GROUND_TEX_KUKI,
	MAP_GROUND_TEX,
	MAP_GROUND_TEX2,
	MAP_GROUND_TEX3,
	MAP_GROUND_TEX4,
	MAP_GROUND_TEX5,
	MAP_GROUND_TEX6,
	MAP_GROUND_TEX7,
	MAP_GROUND_TEX8,
	MAP_GROUND_TEX9,
	MAP_GROUND_TEX10,
	MAP_GROUND_TEX11,
	MAP_GROUND_TEX12,
	MAP_GROUND_TEX13,
	TEXMAX
};

struct CHARCTER_STATE
{
	float x, y, scale;
};

extern LPDIRECT3DTEXTURE9	  g_pTexture[TEXMAX];	//	画像の情報を入れておく為の配列
extern IDirect3DDevice9*	  g_pD3Device;		//	Direct3Dのデバイス
extern D3DPRESENT_PARAMETERS g_D3dPresentParameters;		//	パラメータ
extern D3DDISPLAYMODE		  g_D3DdisplayMode;
extern IDirect3D9*			  g_pDirect3D;		//	Direct3Dのインターフェイス

#endif