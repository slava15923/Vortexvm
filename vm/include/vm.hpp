#pragma once
#include <line.hpp>
#include <registers.hpp>

typedef struct thread
{
    line* line;
    registersthreat* registers;
};

thread** threads;
