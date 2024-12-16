#pragma once

#define NUM_COMMANDS 2
#define NUM_BASE_COMMANDS 16
#define NUM_CONSOLE_COMMANDS 2

#include <line.hpp>
#include <vm.hpp>
#include <iostream>



namespace baseCommand {
    void mov(void* l);//0 копирование данных из одного адресса в другой(итог будет записан в первый указанный адресс)
    void add(void* l);//1 добавление из одного адресса в другой(итог будет записан в первый указанный адресс)
    void fadd(void* l);//2 отнимание из одного адресса в другой (итог будет записан в первый указанный адресс)
    void sub(void* l);//3 отнимание из одного адресса в другой float (итог будет записан в первый указанный адресс)
    void fsub(void* l);//4 умножение из одного адресса в другой(итог будет записан в первый указанный адресс)
    void mul(void* l);//5 умножение из одного адресса в другой (итог будет записан в первый указанный адресс)
    void fmul(void* l);//6 умножение из одного адресса в другой float(итог будет записан в первый указанный адресс)
    void imul(void* l);//7 деление без остатка(итог будет записан в первый указанный адресс)
    void fimul(void* l);//8 деление без остатка float(итог будет записан в первый указанный адресс)
    void rimul(void* l);//9 деление с остатком (итог будет записан в первый указанный адресс)
    void frimul(void* l);//10 деление без остатка float(итог будет записан в первый указанный адресс)
    void rmul(void* l);//11 деление только с остатком(итог будет записан в первый указанный адресс)
    void frmul(void* l);//12 деление без остатка float(итог будет записан в первый указанный адресс)
    void malloc(void* l);//13 выделение памяти
    void free(void* l);//14 очищение памяти
    void intt(void* l);//15 прерывания
}

namespace consoleCommand {
    void print(void* l);//0
    void println(void* l);//1
}

namespace commands {
    void base_Command(void* l);//0
    void console_Command(void* l);//1
}

//COMMANDS

void (*command[])(void*) = { //void (*command[])(void*)
    commands::base_Command,
    commands::console_Command
};

//BASE_COMMANDS

void (*consolecommands[])(void*) = {
    baseCommand::mov,
    baseCommand::add,
    baseCommand::fadd,
    baseCommand::sub,
    baseCommand::fsub,
    baseCommand::mul,
    baseCommand::fmul,
    baseCommand::imul,
    baseCommand::fimul,
    baseCommand::rimul,
    baseCommand::frimul,
    baseCommand::rmul,
    baseCommand::frmul,
    baseCommand::malloc,
    baseCommand::free,
    baseCommand::intt

};

//CONSOLE_COMMANDS


void (*consolecommands[])(void*) = {
    consoleCommand::print,//0
    consoleCommand::println//1
};

uint init_commands();