#include <commands.hpp>

void consoleCommand::print(void* l) {
    std::cout << (const char*)((line*)l)->args[0];
}