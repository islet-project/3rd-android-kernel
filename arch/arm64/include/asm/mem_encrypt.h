/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __ASM_MEM_ENCRYPT_H
#define __ASM_MEM_ENCRYPT_H

#include <asm/rsi.h>

bool mem_encrypt_active(void);
int set_memory_encrypted(unsigned long addr, int numpages);
int set_memory_decrypted(unsigned long addr, int numpages);

static inline bool force_dma_unencrypted(void *dev)
{
	return is_realm_world();
}

#endif	/* __ASM_MEM_ENCRYPT_H */
