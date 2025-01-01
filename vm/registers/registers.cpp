#include <registers.hpp>

registersthreat* init_registers(){
    registersthreat* registers = new registersthreat;
    return registers;
}

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

void** setregistersinvirtualmemory(void** memory, uint32_t mallocsize, registersthreat* registers) {
    if(mallocsize >= 1+num_registers) {
        memory = &memory[num_registers-1];
        memory[-1] = &registers->frax; //double frax = -1;//64 bits register float
            memory[-2] = &registers->feax;//32 bits register float]
        memory[-3] = &registers->frbx;//64 bits register float
            memory[-4] = &registers->febx;//32 bits register float
        memory[-5] = &registers->rax;//64 bits register
            memory[-6] = &registers->eax;//32 bits register
                memory[-7] = &registers->ax;//16 bits register
                memory[-8] = &registers->ah;//8 bits register
                memory[-9] = &registers->al;//8 bits register
        memory[-10] = &registers->rbx;//64 bits register
            memory[-11] = &registers->ebx;//322 bits register
                memory[-12] = &registers->bx;//16 bits register
                    memory[-13] = &registers->bh;//8 bits register
                    memory[-14] = &registers->bl;//8 bits register

        memory[-15] = &registers->dx0;//adress in memory
        memory[-16] = &registers->dx1;//adress in memory
        memory[-17] = &registers->dx2;//adress in memory
        memory[-18] = &registers->dx3;//adress in memory
        memory[-19] = &registers->dx4;//adress in memory
        memory[-20] = &registers->dx5;//adress in memory
        memory[-21] = &registers->dx6;//adress in memory
        memory[-22] = &registers->dx7;//adress in memory

        memory[-23] = &registers->cx0;//adress in memory
        memory[-24] = &registers->cx1;//adress in memory
        memory[-25] = &registers->cx2;//adress in memory
        memory[-26] = &registers->cx3;//adress in memory
        memory[-27] = &registers->cx4;//adress in memory
        memory[-28] = &registers->cx5;//adress in memory
        memory[-29] = &registers->cx6;//adress in memory
        memory[-30] = &registers->cx7;//adress in memory

        memory[-31] = &registers->retfunc;
        memory[-32] = &registers->retpos;
        return memory; 
    }
    
}