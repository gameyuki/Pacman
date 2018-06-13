#include"main.h"
#include"kuki.h"

void KukiReserve(KukiVector* pVk, int size)//�v�f��������@���ŗp�ӂ���
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

//����
void VectorKukkiErase(KukiVector* pVk,size_t ELement)
{
	for (int i = 0; i < pVk->m_size; i++)
	{
		if (ELement < i)
		{
			pVk->pKukki[i-1] = pVk->pKukki[i];
		}
	}

	//�����O�ɏ�����
	memset(&pVk->pKukki[pVk->m_size - 1], 0, sizeof(Kukki));

	//�v�f���̍Ō������
	pVk->m_size -= 1;
}