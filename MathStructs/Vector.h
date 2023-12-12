#pragma once

#include "Matrix.h"
#include <vector>

namespace Math{

class Vector{
public:

    Vector( );
    Vector( int dim );
   /*Vector( const Vector& v );  // copy constructor   - он их сам создаст
    Vector( Vector && v);       // move constructor */
    
    friend Vector operator + ( const Vector &v1, const Vector &v2 );
    friend Vector operator - ( const Vector &v1, const Vector &v2 );

    Vector& operator +=( const Vector &v );
    Vector& operator -=( const Vector &v );

    Vector operator*( double scalar );

    bool operator ==( const Vector &v );

    double dim ( ) const;
    double norm( ) const;

    double scalarProduct( const Vector &v ) const;
    Vector crossProduct ( const Vector &v ) const;
    double angleBetween ( const Vector &v ) const;

    void normalize();

    bool isNull() const;

    double  operator[]( size_t index ) const;
    double& operator[]( size_t index );

    //friend Vector nullVector();

private:

    std::vector<double> v;    // координаты
};

};