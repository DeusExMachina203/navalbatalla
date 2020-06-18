
#ifndef NAVALBATALLA_CONTROLER_H
#define NAVALBATALLA_CONTROLER_H

#include "types.h"

class controler{
private:
    tokenT TOKEN;
    std::string in_path;
    std::string out_path;
    std::string team_name;
public:
    controler(tokenT _TOKEN);
    void read();
    void write();
};

#endif //NAVALBATALLA_CONTROLER_H
