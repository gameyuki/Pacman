#include<Windows.h>
#include<d3dx9.h>
#include"main.h"

void settexture()
{
	g_pD3Device->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	g_pD3Device->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
	g_pD3Device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);

	g_pD3Device->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
	g_pD3Device->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);

	g_pD3Device->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
	g_pD3Device->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
}

void Set()
{
	//���_�ɓ����f�[�^��ݒ�
	g_pD3Device->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		TEXT("�w�i���G.png"),
		&g_pTexture[BACKGROUND_TEX]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("clear.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[BACKGROUND_TEX2]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("�������p�b�N�}��5.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[PACMANLEFT_TEX]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("�E�����p�b�N�}��5.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[PACMANRIGHT_TEX]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("������p�b�N�}��5.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[PACMANUP_TEX]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("�������p�b�N�}��5.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[PACMANDOWN_TEX]);

	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("�p�b�N�}������4.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[PACMAN_EX_TEX]);


	D3DXCreateTextureFromFileEx(
		g_pD3Device,
		TEXT("Enemy1.png"),
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_FILTER_NONE,
		D3DCOLOR_ARGB(255, 0, 255, 0),
		NULL,
		NULL,
		&g_pTexture[ENEMY_1_TEX]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�N�b�L�[������.png",
		&g_pTexture[MAP_GROUND_TEX_KUKI]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�c��.png",
		&g_pTexture[MAP_GROUND_TEX]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"����p.png",
		&g_pTexture[MAP_GROUND_TEX2]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"����.png",
		&g_pTexture[MAP_GROUND_TEX3]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"����.png",
		&g_pTexture[MAP_GROUND_TEX4]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"����.png",
		&g_pTexture[MAP_GROUND_TEX5]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�E��p.png",
		&g_pTexture[MAP_GROUND_TEX6]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�����p.png",
		&g_pTexture[MAP_GROUND_TEX7]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�E���p.png",
		&g_pTexture[MAP_GROUND_TEX8]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"����.png",
		&g_pTexture[MAP_GROUND_TEX9]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�����.png",
		&g_pTexture[MAP_GROUND_TEX10]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�����.png",
		&g_pTexture[MAP_GROUND_TEX11]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"�E���.png",
		&g_pTexture[MAP_GROUND_TEX12]);

	D3DXCreateTextureFromFile(
		g_pD3Device,
		"��Q����.png",
		&g_pTexture[MAP_GROUND_TEX13]);
}