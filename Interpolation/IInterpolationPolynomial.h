#include <vector>

namespace Math{

/* Интерфейсный класс интерполяционного полинома */
class IInterpolationPolynomial{
public:
    virtual ~IInterpolationPolynomial() = 0;

    virtual double operator()( double t ) = 0;
};

};