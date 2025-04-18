#ifndef AULA09_ATV01_INCLUDE_DAY_H
#define AULA09_ATV01_INCLUDE_DAY_H

#include <string>

class Days {
public:
    Days(int day, int month);
    ~Days();

    void DescobreSigno();
    void MostraSigno() const;

private:
    int day_, month_;
    std::string signo_;

    std::string DeterminarSigno() const;
};

#endif
