#include "../include/Core.h"

// Değişkenin tanımı
bool Core::runCheck = false;

bool Core::isRun() {
    return runCheck;
}

void Core::setIsRun(bool value) {
    runCheck = value;
}
