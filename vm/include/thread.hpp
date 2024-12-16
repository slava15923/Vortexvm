#pragma once
#include <registers.hpp>
#include <memory.hpp>
#include <vm.hpp>
#include <line.hpp>

typedef struct thread
{
    line* line;
    // file //code
    registersthreat* registers;
    VirtualMemory memory;
};