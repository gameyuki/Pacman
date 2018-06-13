#include<Windows.h>
#include<d3d9.h>
#include<dinput.h>
#include"main.h"
#include"Dinput.h"
#include"Collision.h"
#include"Enemy.h"
#include"MapTip.h"

/*window�̉�ʃT�C�Y*/
#define WIDTH	640
#define	HEIGHT	780

/*�}�b�v�`�b�v�̐�*/
#define MAP_WIDTH  19
#define MAP_HEIGHT 22

/*�}�b�v�`�b�v�̑傫��*/
#define TIPSIZE 32

/*�p�b�N�}���̈��̃X�s�[�h*/
#define PACMOVE (TIPSIZE / 8)

CHARCTER_STATE g_pacman = { 304, 400, 15.f };

/*�p�b�N�}���̈ړ���*/
float x = 0;
float y = 0;

/*�A�j���[�V�����p*/
bool g_EX = false;
static int	g_timeup = 0;

/*�p�b�N�}���̌���*/
bool g_UP = false;
bool g_DOWN = false;
bool g_LEFT = true;
bool g_RIGHT = false;

void pacdraw()
{
	CUSTOMVERTEX pacman[]
	{
		{ g_pacman.x - g_pacman.scale + x, g_pacman.y - g_pacman.scale + y, 1.f, 1.f, 0xFFFFFFFF, 0.f, 0.f },
		{ g_pacman.x + g_pacman.scale + x, g_pacman.y - g_pacman.scale + y, 1.f, 1.f, 0xFFFFFFFF, 1.f, 0.f },
		{ g_pacman.x + g_pacman.scale + x, g_pacman.y + g_pacman.scale + y, 1.f, 1.f, 0xFFFFFFFF, 1.f, 1.f },
		{ g_pacman.x - g_pacman.scale + x, g_pacman.y + g_pacman.scale + y, 1.f, 1.f, 0xFFFFFFFF, 0.f, 1.f }
	};

	if (g_LEFT)
	{
		g_pD3Device->SetTexture(0, g_pTexture[PACMANLEFT_TEX]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, pacman, sizeof(CUSTOMVERTEX));

	}

	else if (g_RIGHT)
	{
		g_pD3Device->SetTexture(0, g_pTexture[PACMANRIGHT_TEX]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, pacman, sizeof(CUSTOMVERTEX));
	}

	else if (g_UP)
	{
		g_pD3Device->SetTexture(0, g_pTexture[PACMANUP_TEX]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, pacman, sizeof(CUSTOMVERTEX));

	}

	else if (g_DOWN)
	{
		g_pD3Device->SetTexture(0, g_pTexture[PACMANDOWN_TEX]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, pacman, sizeof(CUSTOMVERTEX));
	}

	if (g_EX)
	{
		g_pD3Device->SetTexture(0, g_pTexture[PACMAN_EX_TEX]);
		g_pD3Device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, pacman, sizeof(CUSTOMVERTEX));

		g_EX = false;
	}
}

void Paccontrol()
{
	KEYSTATE key[256];
	KeyCheckDinput(&key[DIK_LEFT], DIK_LEFT);
	KeyCheckDinput(&key[DIK_RIGHT], DIK_RIGHT);
	KeyCheckDinput(&key[DIK_UP], DIK_UP);
	KeyCheckDinput(&key[DIK_DOWN], DIK_DOWN);
	KeyCheckDinput(&key[DIK_Z], DIK_Z);
	KeyCheckDinput(&key[DIK_A], DIK_A);
	KeyCheckDinput(&key[DIK_W], DIK_W);
	KeyCheckDinput(&key[DIK_SPACE], DIK_SPACE);

	/*�p�b�N�}����������ʒu���}�b�v�`�b�v��̈ʒu�ɓ��ěƂ߂Ȃ��Ɠ����蔻�肪�v�Z�ł��Ȃ�*/

	if (key[DIK_UP] == ON)
	{

		/*[0]����̓����蔻��*/
		int upLx = ((g_pacman.x - g_pacman.scale + x) / TIPSIZE);
		int upLy = ((g_pacman.y - g_pacman.scale + y - PACMOVE) / TIPSIZE);

		/*[1]�E��̓����蔻��*/
		int upRx = ((g_pacman.x + g_pacman.scale + x) / TIPSIZE);
		int upRy = ((g_pacman.y - g_pacman.scale + y - PACMOVE) / TIPSIZE);

		if (((map[upLy][upLx]) == 0) && ((map[upRy][upRx]) == 0) || ((map[upLy][upLx]) == 20) && ((map[upRy][upRx]) == 20))
		{
			g_DOWN = false;
			g_LEFT = false;
			g_RIGHT = false;
			g_UP = true;
			y -= PACMOVE;
			g_EX = true;
			g_timeup += 1;
			map[upLy][upLx] = 20;
		}
	}

	if (key[DIK_DOWN] == ON)
	{
		/*[2]�E���̓����蔻��*/
		int LowRx = ((g_pacman.x + g_pacman.scale + x) / TIPSIZE);
		int LowRy = ((g_pacman.y + g_pacman.scale + y + PACMOVE) / TIPSIZE);

		/*[3]�����̓����蔻��*/
		int LowLx = ((g_pacman.x - g_pacman.scale + x) / TIPSIZE);
		int LowLy = ((g_pacman.y + g_pacman.scale + y + PACMOVE) / TIPSIZE);

		if (((map[LowLy][LowLx]) == 0) && ((map[LowRy][LowRx]) == 0) || ((map[LowLy][LowLx]) == 20) && ((map[LowRy][LowRx]) == 20))
		{
			g_UP = false;
			g_LEFT = false;
			g_RIGHT = false;
			g_DOWN = true;
			y += PACMOVE;
			g_EX = true;
			g_timeup += 1;
			map[LowLy][LowLx] = 20;
		}
	}

	if (key[DIK_LEFT] == ON)
	{
		/*[0]����̓����蔻��*/
		int upLx = ((g_pacman.x - g_pacman.scale + x - PACMOVE) / TIPSIZE);
		int upLy = ((g_pacman.y - g_pacman.scale + y) / TIPSIZE);

		/*[3]�����̓����蔻��*/
		int LowLx = ((g_pacman.x - g_pacman.scale + x - PACMOVE) / TIPSIZE);
		int LowLy = ((g_pacman.y + g_pacman.scale + y) / TIPSIZE);

		if (((map[upLy][upLx]) == 0) && ((map[LowLy][LowLx]) == 0) || ((map[upLy][upLx]) == 20) && ((map[LowLy][LowLx])==20))
		{
			g_UP = false;
			g_DOWN = false;
			g_RIGHT = false;
			g_LEFT = true;
			x -= PACMOVE;
			g_EX = true;
			g_timeup += 1;
			map[upLy][upLx] = 20;
		}
	}

	if (key[DIK_RIGHT] == ON)
	{
		/*[1]�E��̓����蔻��*/
		int upRx = ((g_pacman.x + g_pacman.scale + x + PACMOVE) / TIPSIZE);
		int upRy = ((g_pacman.y - g_pacman.scale + y) / TIPSIZE);

		/*[2]�E���̓����蔻��*/
		int LowRx = ((g_pacman.x + g_pacman.scale + x + PACMOVE) / TIPSIZE);
		int LowRy = ((g_pacman.y + g_pacman.scale + y) / TIPSIZE);

		if (((map[upRy][upRx]) == 0) && ((map[LowRy][LowRx]) == 0) || ((map[upRy][upRx]) == 20) && ((map[LowRy][LowRx]) == 20))
		{
			g_UP = false;
			g_DOWN = false;
			g_LEFT = false;
			g_RIGHT = true;
			x += PACMOVE;
			g_EX = true;
			g_timeup += 1;
			map[upRy][upRx] = 20;
		}
	}

	/*�p�b�N�}���̃A�j���[�V��������*/
	if (g_timeup > 7)
	{
		g_EX = false;
		g_timeup = 0;
	}



}