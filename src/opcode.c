#include <stdio.h>
#include <stdlib.h>

#include "opcode.h"

Opcode opcode_new(OpcodeType type, int value) {
    return (Opcode) {.type = type, .value = value};
}

void opcode_print(Opcode *opcode) {
    switch (opcode->type) {
        case OP_PCH:
            printf("PCH");
            break;
        case OP_GCH:
            printf("GCH");
            break;
        case OP_ADD:
            printf("ADD(%d)", opcode->value);
            break;
        case OP_INC:
            printf("INC(%d)", opcode->value);
            break;
        case OP_JZE:
            printf("JZE(%d)", opcode->value);
            break;
        case OP_JNZ:
            printf("JNZ(%d)", opcode->value);
            break;
        case OP_ZERO:
            printf("ZERO");
            break;
        case OP_HALT:
            printf("HALT");
            break;
    }
}
