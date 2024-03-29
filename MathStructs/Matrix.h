#pragma once

#include <vector>
#include "Vector.h"

namespace Math{

class Matrix{
public: 
    
    Matrix( );
    Matrix( int rows, int cols );

    friend Matrix operator + ( const Matrix &m1, const Matrix &m2 );
    friend Matrix operator - ( const Matrix &m1, const Matrix &m2 );

    Vector multOnVector( const Vector &v );
    Matrix multOnMatrix( const Matrix &m );

    //double norm();

    std::pair<size_t, size_t> dim() const;

private:
    std::vector<std::vector<double>> mat;
};

};