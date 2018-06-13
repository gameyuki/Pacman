#ifndef KUKI_H
#define	KUKI_H

struct Vector
{
	void* p_top;       //先頭ポインタ
	size_t m_size;     //要素数
	size_t data;	   //型の大きさ
	size_t m_capacity; //最大メモリ領域
};

struct Kukki
{
	int ID;
};

struct KukiVector
{
	Kukki* pKukki;
	size_t m_size;     //要素数
	size_t m_capacity; //最大メモリ領域
};

void KukiReserve(KukiVector* pVk, int size);
void VectorKukkiRelease(KukiVector* pVk);
void VectorKukkiPushBack(KukiVector* pVk);
void VectorKukkiErase(KukiVector* pVk, size_t ELement);

#endif