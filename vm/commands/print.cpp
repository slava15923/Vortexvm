#include <commands.hpp>

void commands::print(void* l) {
    std::cout << (const char*)((line*)l)->args[0];
}