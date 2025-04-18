#pragma once // switch to pragma once cause more modern
#include <string>

class ConfigChecker {
public:
    static bool isFreezeDay(const std::string& date);
};