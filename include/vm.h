#ifndef bf_vm_h
#define bf_vm_h

#include "array.h"
#include "opcode.h"

typedef struct virtual_machine {
    int ip;
    int dp;
    array(unsigned char, mem);
} VM;

void vm_init(VM *vm, int size);
int  vm_execute(VM *vm, OpcodeArray *program, int debug);
void vm_free(VM *vm);

#endif
