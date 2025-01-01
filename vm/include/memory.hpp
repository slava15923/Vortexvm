#pragma once
#include <iostream>


class VirtualMemory {
public:
    VirtualMemory();
    ~VirtualMemory();
    void* getDataInAdress(uint args);
    void* setDataInAdress(uint args1, uint args2);//из args1 в args2 копипует данные
    void setMemorySize(uint size);
    void setArgsSize(uint size);//выполнять ТОЛЬКО после setMemorySize()
    void setNumFunction(uint size);
    void addAllFunction(void** adressAllFunc);//выполнять ТОЛЬКО после setNumFunction
private:
    void** memory;
    uint* sizeargs;
};