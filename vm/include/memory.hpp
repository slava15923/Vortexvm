#pragma once
#include <iostream>


class VirtualMemory {
public:
    VirtualMemory();
    ~VirtualMemory();
    void* getDataInAdress(uint32_t adress);
    void* setDataInAdress(uint32_t adress, void* data);
    void setMemorySize(uint32_t size);
private:
    void** memory;
};