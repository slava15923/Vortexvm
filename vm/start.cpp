#include <start.hpp>
/*
struct startbytes {
    uint numArgs;//количество адресов в virtualmemory
    uint numfunc;//количество функций
    uint sizeArgs;//размер переменных на которые указывает virtualmemory
    void** func;
    uint* sizeArgss;
};
uint setStartDataInVirtualMemory(VirtualMemory* memory, struct startbytes* startdata);
*/

uint setStartDataInVirtualMemory(VirtualMemory* memory, struct startbytes* startdata) {
    memory->setMemorySize(startdata->numArgs);
    memory->setNumFunction(startdata->numfunc);
    memory->addAllFunction(startdata->func);
    return 0;
}