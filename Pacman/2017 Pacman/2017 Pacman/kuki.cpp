#include"main.h"
#include"kuki.h"

void KukiReserve(KukiVector* pVk, int size)//要素数を入れる　中で用意する
{
	pVk->pKukki = (Kukki*)malloc(size * sizeof(Kukki));
	pVk->m_capacity = size*sizeof(Kukki);
	pVk->m_size = 0;
}

void VectorKukkiRelease(KukiVector* pVk)
{
	pVk->m_capacity = 0;
	pVk->m_size = 0;
	free(pVk->pKukki);
}

void VectorKukkiPushBack(KukiVector* pVk)
{
	pVk->m_size += 1;	
	if (pVk->m_size * sizeof(Kukki) > pVk->m_capacity)
	{
		DebugBreak();
	}
}

//消去
void VectorKukkiErase(KukiVector* pVk,size_t ELement)
{
	for (int i = 0; i < pVk->m_size; i++)
	{
		if (ELement < i)
		{
			pVk->pKukki[i-1] = pVk->pKukki[i];
		}
	}

	//消す前に初期化
	memset(&pVk->pKukki[pVk->m_size - 1], 0, sizeof(Kukki));

	//要素数の最後を消す
	pVk->m_size -= 1;
}