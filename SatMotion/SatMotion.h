#pragma once

#include "ISatMotion.h"

namespace Math{

// возмущения от гравитационного поля Солнца

class SatMotion : public ISatMotion{
public:

    SatMotion( IntegrationSettings settings_ );
    ~SatMotion();

    double stepTo    ( double dT ) override; 
    double predictTo ( double t  ) override;

private:
    IntegrationSettings settings;
};

}