#ifndef KUKI_H
#define	KUKI_H

struct Vector
{
	void* p_top;       //�擪�|�C���^
	size_t m_size;     //�v�f��
	size_t data;	   //�^�̑傫��
	size_t m_capacity; //�ő僁�����̈�
};

struct Kukki
{
	int ID;
};

struct KukiVector
{
	Kukki* pKukki;
	size_t m_size;     //�v�f��
	size_t m_capacity; //�ő僁�����̈�
};

void KukiReserve(KukiVector* pVk, int size);
void VectorKukkiRelease(KukiVector* pVk);
void VectorKukkiPushBack(KukiVector* pVk);
void VectorKukkiErase(KukiVector* pVk, size_t ELement);

#endif