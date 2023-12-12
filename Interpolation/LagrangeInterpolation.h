#include "IInterpolationPolynomial.h"
#include <vector>

namespace Math{

// множители лагранжа
struct lagrange_t{
    
    lagrange_t( std::vector<double> t_ ) : t(_t){};
    
    double operator()( double t );

private:
    std::vector<double> t;
};

class LagrangeInterp : public IInterpolationPolynomial{
public:

    LagrangeInterp( std::vector<double> t, std::vector<double> x);
    ~LagrangeInterp();

    double operator()( double t );

private:

    void CreateLagrangeMultipliers()ж

private:

    std::vector<lagrange_t> L;
    std::vector<double> x;
};

};