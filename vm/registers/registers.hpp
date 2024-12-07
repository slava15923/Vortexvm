#pragma once
#include <iostream>
#include <stdio.h>
typedef struct _registersthreat {
    double frax;//64 bits register float
        float feax;//32 bits register float
    int64_t rax;//64 bits register
        int32_t eax;//32 bits register
            int16_t ax;//16 bits register
                int8_t ah;//8 bits register
                int8_t al;//8 bits register
    int64_t rbx;//64 bits register
        int32_t ebx;//322 bits register
            int16_t bx;//16 bits register
                int8_t bh;//8 bits register
                int8_t bl;//8 bits register
    
    void* dx0;//adress in memory
    void* dx1;//adress in memory
    void* dx2;//adress in memory
    void* dx3;//adress in memory
    void* dx4;//adress in memory
    void* dx5;//adress in memory
    void* dx6;//adress in memory
    void* dx7;//adress in memory

    void* cx0;//adress in memory
    void* cx1;//adress in memory
    void* cx2;//adress in memory
    void* cx3;//adress in memory
    void* cx4;//adress in memory
    void* cx5;//adress in memory
    void* cx6;//adress in memory
    void* cx7;//adress in memory

    void* retfunc;
    void* retpos;
} registersthreat;

registersthreat* init_registers();