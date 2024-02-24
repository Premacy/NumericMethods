#pragma once

#include "ISatMotion.h"
#include "Consts.h"

namespace Math{

// Везде считаем, что vec = (x,y,z,Vx,Vy,Vz,mass)
class SunPertub : public IRightPart{
public:
     double operator()( const Math::Vector &vec );
};

// возмущения от гравитационного поля Луны
class MunPertub : public IRightPart{
public:
     double operator()( const Math::Vector &vec );
};

// возмущения от гравитационного поля Земли
class EarthPertub : public IRightPart{
public:
     double operator()( const Math::Vector &vec );
private:
    Earth earth;
};

// возмущения от работы двигателей
class Corrections : public IRightPart{
public:
     double operator()( const Math::Vector &vec );
};

}
