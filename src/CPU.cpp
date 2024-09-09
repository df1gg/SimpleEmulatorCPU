#include <iostream>

#include "CPU.h"
#include <cstdint>


CPU::CPU() : registers(), memory() {}

void CPU::execute()
{
    while (true)
    {
        uint8_t opcode = fetch();
        switch (opcode)
        {
            case 0xA9:
                ldaImmediate();
                break;
            case 0x00:
                return;
            default:
                std::cerr << "Unknow opcode!" << "\n";
                return;
        }
    }
}

void CPU::ldaImmediate()
{
    uint8_t value = memory.read(registers.PC);
    registers.A = value;
    registers.PC++;
}

uint8_t CPU::fetch()
{
    return memory.read(registers.PC++);
}
