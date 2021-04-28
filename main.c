
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sha256.h"
#include "Dig.h"


int main(void) {
	int i=0;
	unsigned char Hash[32] = { 0 }; 
	//printf("n=4ʱ \n");
	SHA256_CTX ctx;
	BLOCK block;
	Block_init(&block);
	sha256_init(&ctx);
	Dig(&ctx, &block, Hash, N0);
	printf("��ϣֵΪ ");
    while ( i < 32)
		printf("%x ", Hash[i++]);
	system("pause");
	return 0;
}
