#pragma once
#include <registers.hpp>
#include <memory.hpp>
#include <vm.hpp>
#include <line.hpp>

typedef struct thread
{
    line* line;
    registersthreat* registers;
    VirtualMemory memory;
};