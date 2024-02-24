#pragma once

#include "RightParts.h"

namespace Math{


double EarthPertub::operator()( const Math::Vector &vec ){
    const double mass = vec[6];
    const double norm = vec.norm();

    return ( earth.G_EarthParam() * mass ) / ( norm );
}

};