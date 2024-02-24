#pragma once

#include <string>

namespace Math{

class IMathException{
public:
    virtual std::string what() = 0;
};

};