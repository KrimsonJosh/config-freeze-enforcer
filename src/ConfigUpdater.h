#pragma once
#include <string>

class ConfigUpdater{
private:
    std::string privacyFlag;

public:
    ConfigUpdater();
    void enforceDefaultPolicy();
    std::string getPolicy() const;
};