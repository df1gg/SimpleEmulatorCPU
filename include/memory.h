#ifndef MEMORY_H
#define MEMORY_H

#include <array>
#include <cstdint>

class Memory
{
public:
    Memory();

    uint8_t read(uint16_t address) const;
    void write(uint16_t address, uint8_t value);

private:
    std::array<uint8_t, 65536> memory;  // 64KB memory
};

#endif // MEMORY_H
