#ifndef TYPES_H
#define TYPES_H

#include <vector>
#include <iostream>
#include <filesystem>
#include <fstream>

using spaceT = size_t;
using locationT = std::pair<size_t,size_t>;
using tokenT = std::string;
enum class orientationT{horizontal, vertical};

struct ships{
    spaceT width;
    spaceT length;
    orientationT orientation;
    locationT location;
};

using shiplistT = std::vector<ships>;
#endif //NAVALBATALLA_TYPES_H
