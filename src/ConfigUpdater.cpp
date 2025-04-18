#include "ConfigUpdater.h"

ConfigUpdater::ConfigUpdater(): privacyFlag("") {} 

void ConfigUpdater::enforceDefaultPolicy() {
    if (privacyFlag.empty()){
        privacyFlag = "REQUIRED";
    }
}

std::string ConfigUpdater::getPolicy() const {
    return privacyFlag;
}