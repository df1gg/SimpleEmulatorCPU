#ifndef CPU_H
#define CPU_H

#include "registers.h"
#include "memory.h"
#include <cstdint>

class CPU
{
public:
    CPU();

    void execute();

private:
    Registers registers;
    Memory memory;

    void ldaImmediate();
    uint8_t fetch();
};

#endif // CPU_H
