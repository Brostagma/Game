#ifndef CORE_H
#define CORE_H

class Core {
private:
    static bool runCheck; // Değişken deklarasyonu
public:
    static bool isRun();
    static void setIsRun(bool value);
};

#endif

