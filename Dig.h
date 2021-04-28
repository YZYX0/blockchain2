#pragma once
#ifndef mining_h
#define mining_h

#include "sha256.h"
#define blockBytes 96 //ÿ��������ռ�ֽ��� 
#define N0 4  //hash��ͷ��N0��16����0 
#define MaxNum 1000000 //nonce1,nonce2������� 

typedef struct {
	long long chain_version;//8 byte
	BYTE prev_hash[32];//32 byte
	long long nonce1;//8 byte
	long long nonce2;//8 byte
	BYTE coinbase[32];//32 byte 
	double amount;//8 byte  
} BLOCK;

void Block_init(BLOCK *p);
int Dig(SHA256_CTX *ctx, BLOCK *p, BYTE *hash, int n0);
//�ҵ�nonce1 nonce2 ʹ��block��hash���㿪ͷ��n0��16����0 
#endif  
