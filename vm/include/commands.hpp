#pragma once

#define NUM_COMMANDS 1
#define NUM_CONSOLE_COMMANDS 2

#include <line.hpp>
#include <vm.hpp>
#include <iostream>

void (*command[NUM_COMMANDS])(void*);

//CONSOLE_COMMANDS

void (*consolecommands[NUM_CONSOLE_COMMANDS])(void*);

namespace consoleCommand {
    void print(void* l);//0
    void println(void* l);//1
}

namespace commands {
    void console_Command(void* l);//0
}

uint init_commands();