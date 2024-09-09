#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

class Registers
{
public:
    Registers();

    uint8_t A;      // Accumulator
    uint8_t X, Y;   // Index registers
    uint16_t PC;    // Program Counter
};

#endif // REGISTERS_H
