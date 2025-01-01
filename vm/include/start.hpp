#pragma once

#include <iostream>
#include <memory.hpp>

struct startbytes {
    uint numArgs;//количество адресов в virtualmemory
    uint numfunc;//количество функций
    uint sizeArgs;//размер переменных на которые указывает virtualmemory
    void** func;
    uint* sizeArgss;
};
uint setStartDataInVirtualMemory(VirtualMemory* memory, struct startbytes* startdata);