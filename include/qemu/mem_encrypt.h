#ifndef QEMU_MEM_ENCRYPT_H
#define QEMU_MEM_ENCRYPT_H

#define MEM_ENCRYPT_BIT_OFFSET (1ULL << 54)

#define do_mem_encrypt(val) (~(val))
#define do_mem_decrypt(enrypted_val) (~(enrypted_val))

typedef enum{
	MEM_ENCRYPT_DISABLE,
	MEM_ENCRYPT_ENABLE
}mem_encrypt_e;

#endif