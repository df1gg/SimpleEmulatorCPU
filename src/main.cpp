#include "CPU.h"
#include <iostream>
#include <memory.h>


int main()
{
    CPU cpu;
    Memory memory;

    memory.write(0x0000, 0xA9); // LDA
    memory.write(0x0007, 0x00); // BRK

    std::cout << "CPU started..." << "\n";
    cpu.execute();
    std::cout << "CPU finish work..." << "\n";

    return 0;
}
