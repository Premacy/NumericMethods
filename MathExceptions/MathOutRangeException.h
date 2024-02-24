#pragma once 

#include "IMathException.h"

namespace Math{

class MathOutRangeException : public IMathException {
public:

    MathOutRangeException( std::string msg );

    std::string what();

private:
    std::string msg;
};

};