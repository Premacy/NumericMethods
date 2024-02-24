#pragma once

#include "../MathStructs/Vector.h"

namespace Math{

struct IntegrationSettings{
    double step;        // шаг интегрирования
    double start;       // начальный момент интегрирования

    Math::Vector iCond; // началки
};

// правые части
class IRightPart{
public:
    virtual double operator()( const Math::Vector &vec ) = 0;

    virtual ~IRightPart() = 0;
};

class IFragment{
public:

};

class ISatMotion{
public:
    virtual double stepTo    ( double dT ) = 0; // T_fin = T_start + dt
    virtual double predictTo ( double t  ) = 0;

    virtual ~ISatMotion() = 0;
};

};