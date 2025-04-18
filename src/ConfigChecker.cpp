#include "ConfigChecker.h"

bool ConfigChecker::isFreezeDay(const std::string& date){
    return date == "2025-11-28" || date == "2025-11-05"; //Check if black friday or election day (yes i made election day up)
}