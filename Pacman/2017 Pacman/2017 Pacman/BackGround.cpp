#include<Windows.h>
#include<d3dx9.h>

#include"BackGround.h"
#include"main.h"
#include"MapTip.h"

#define WIDTH	640
#define	HEIGHT	780

#define MAP_WIDTH  19
#define MAP_HEIGHT 22
#define TIPSIZE 32

#define MAP_CAP MAP_WIDTH * MAP_HEIGHT

static bool AllCount = true;

void BGdraw()
{
	/*”wŒi*/
	CUSTOMVERTEX BackGround[]
	{
		{ 0.f, 0.f, 1.f, 1.f, 0xFFFFFFFF, 0.f, 0.f },
		{ WIDTH, 0.f, 1.f, 1.f, 0xFFFFFFFF, 1.f, 0.f },
		{ WIDTH, HEIGHT, 1.f, 1.f, 0xFFFFFFFF, 1.f, 1.f },
		{ 0.f, HEIGHT, 1.f, 1.f, 0xFFFFFFFF, 0.f, 1.f }
	};

	/*”wŒi2*/
	CUSTOMVERTEX BackGround2[]
	{
		{ 0.f, 0.f, 1.f, 1.f, 0xFFFFFFFF, 0.f, 0.f },
		{ WIDTH, 0.f, 1.f, 1.f, 0xFFFFFFFF, 1.f, 0.f },
		{ WIDTH, HEIGHT, 1.f, 1.f, 0xFFFFFFFF, 1.f, 1.f },
		{ 0.f, HEIGHT, 1.f, 1.f, 0xFFFFFFFF, 0.f, 1.f }
	};

	// ƒ}ƒbƒvƒ`ƒbƒv‚Ì’¸“_î•ñ

	CUSTOMVERTEX g_mapTip0[] =
	{
		{ 0.0f,    0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f,    TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip1[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip2[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip3[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip4[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip5[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip6[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip7[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip8[] =
	{
		{ 0.0f,    0.0f,    0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f,    0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f,    TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip9[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip10[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip11[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.f, 1.0f },
	};

	CUSTOMVERTEX g_mapTip12[] =
	{
		{ 0.0f, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f },
		{ TIPSIZE, 0.0f, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f },
		{ TIPSIZE, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f },
		{ 0.0f, TIPSIZE, 0.5f, 1.0f, 0xFFFFFFFF, 0.0f, 1.0f },
	};

	g_pD3Device->SetTexture(0, g_pTexture[BACKGROUND_TEX]);
	g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, BackGround, sizeof(CUSTOMVERTEX));

	/*maptip‚Ì•`‰æ*/
	for (int i = 0; i < MAP_WIDTH; i++)
	{
		for (int j = 0; j < MAP_HEIGHT; j++)
		{
			CUSTOMVERTEX maptip[4];
			switch (map[j][i])
			{
			case 0:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip0[k];     //ã‚Åì‚Á‚½maptip[4]‚ÉÅ‰‚Éì‚Á‚½•X‚Ìî•ñ‚ð“ü‚ê‚Ä‚¢‚é
					maptip[k].x += TIPSIZE * i;  //‚©‚¯‚é‚±‚Æ‚É‚æ‚Á‚ÄA’u‚­êŠ‚ÌÀ•W‚ðŒˆ‚ß‚Ä‚¢‚é
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX_KUKI]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 1:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip1[k];     //ã‚Åì‚Á‚½maptip[4]‚ÉÅ‰‚Éì‚Á‚½•X‚Ìî•ñ‚ð“ü‚ê‚Ä‚¢‚é
					maptip[k].x += TIPSIZE * i;  //‚©‚¯‚é‚±‚Æ‚É‚æ‚Á‚ÄA’u‚­êŠ‚ÌÀ•W‚ðŒˆ‚ß‚Ä‚¢‚é
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 2:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip2[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX2]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 3:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip3[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX3]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 4:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip4[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX4]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 5:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip5[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX5]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 6:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip6[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX6]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 7:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip7[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX7]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 8:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX8]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 11:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX9]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 12:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX10]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 13:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX11]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 14:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX12]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;

			case 16:
				for (int k = 0; k < 4; k++)
				{
					maptip[k] = g_mapTip8[k];
					maptip[k].x += TIPSIZE * i;
					maptip[k].y += TIPSIZE * j;
				}
				g_pD3Device->SetTexture(0, g_pTexture[MAP_GROUND_TEX13]);
				g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, maptip, sizeof(CUSTOMVERTEX));
				break;
			}
		}
	}

	AllCount = true;

	for (int i = 0; i < MAP_WIDTH; i++)
	{
		for (int j = 0; j < MAP_HEIGHT; j++)
		{
			if ((map[j][i]) == 0)
			{
				AllCount = false;
			}
		}
	}

	if (AllCount)
	  {
		g_pD3Device->SetTexture(0, g_pTexture[BACKGROUND_TEX2]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, BackGround2, sizeof(CUSTOMVERTEX));
	  }
}