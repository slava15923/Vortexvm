#pragma once
#define num_registers 32
#include <iostream>


typedef struct _registersthreat {

    double frax;//64 bits register float
        float feax;//32 bits register float]
    double frbx;//64 bits register float
        float febx;//32 bits register float
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

/*double frax = -1;//64 bits register float
    float feax = -2;//32 bits register float]
    double frbx = -3;//64 bits register float
    float febx = -4;//32 bits register float
    int64_t rax = -5;//64 bits register
    int32_t eax = -6;//32 bits register
    int16_t ax = -7;//16 bits register
    int8_t ah = -8;//8 bits register
    int8_t al = -9;//8 bits register
    int64_t rbx = -10;//64 bits register
    int32_t ebx = -11;//322 bits register
    int16_t bx = -12;//16 bits register
    int8_t bh = -13;//8 bits register
    int8_t bl = -14;//8 bits register
    
    void* dx0 = -15;//adress in memory
    void* dx1 = -16;//adress in memory
    void* dx2 = -17;//adress in memory
    void* dx3 = -18;//adress in memory
    void* dx4 = -19;//adress in memory
    void* dx5 = -20;//adress in memory
    void* dx6 = -21;//adress in memory
    void* dx7 = -22;//adress in memory

    void* cx0 = -23;//adress in memory
    void* cx1 = -24;//adress in memory
    void* cx2 = -25;//adress in memory
    void* cx3 = -26;//adress in memory
    void* cx4 = -27;//adress in memory
    void* cx5 = -28;//adress in memory
    void* cx6 = -29;//adress in memory
    void* cx7 = -30;//adress in memory

    void* retfunc = -31;
    void* retpos = -32;*/

registersthreat* init_registers();

void* setregistersinvirtualmemory(void** memory, uint32_t mallocsize);