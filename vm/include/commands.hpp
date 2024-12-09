#pragma once

#define NUM_COMMANDS 2
#define NUM_BASE_COMMANDS 0
#define NUM_CONSOLE_COMMANDS 2

#include <line.hpp>
#include <vm.hpp>
#include <iostream>

void (*command[NUM_COMMANDS])(void*);

//BASE_COMMANDS

void (*basecommands[NUM_BASE_COMMANDS])(void*);

//CONSOLE_COMMANDS

void (*consolecommands[NUM_CONSOLE_COMMANDS])(void*);

namespace consoleCommand {
    void mov(void* l);//0 копирование данных из одного адресса в другой(итог будет записан в первый указанный адресс)
    void add(void* l);//1 добавление из одного адресса в другой(итог будет записан в первый указанный адресс)
    void sub(void* l);//2 отнимание из одного адресса в другой(итог будет записан в первый указанный адресс)
    void mul(void* l);//3 умножение из одного адресса в другой(итог будет записан в первый указанный адресс)
    void imul(void* l);//4 деление без остатка(итог будет записан в первый указанный адресс)
    void rimul(void* l);//5 деление с остатком(итог будет записан в первый указанный адресс)
    void rmul(void* l);//6 деление только с остатком(итог будет записан в первый указанный адресс)
    void malloc(void* l);//7 выделение памяти
    void free(void* l);//8 очищение памяти
}

namespace consoleCommand {
    void print(void* l);//0
    void println(void* l);//1
}

namespace commands {
    void base_Command(void* l);
    void console_Command(void* l);//1
}

uint init_commands();