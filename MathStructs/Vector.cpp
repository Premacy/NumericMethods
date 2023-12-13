#include "Vector.h"

namespace Math{

Vector operator + ( const Vector &v1, const Vector &v2 ){
    if( v1.dim() != v2.dim () ) throw MathOutRangeException("Error from Vector::operator+");

    const int n = v1.dim();

    Vector result( n );
    for( size_t i = 0; i < n; i++ ) result[i] = v1[i] + v2[i];
}

Vector operator - ( const Vector &v1, const Vector &v2 ){
    if( v1.dim() != v2.dim () ) throw MathOutRangeException("Error from Vector::operator+");

    const int n = v1.dim();

    Vector result( n );
    for( size_t i = 0; i < n; i++ ) result[i] = v1[i] - v2[i];
}

Vector& Vector::operator +=( const Vector &v ){
    *this = *this + v;
    return *this;
}

Vector& Vector::operator -=( const Vector &v ){
    *this = *this - v;
    return *this;
}

Vector Vector::operator*( double scalar ){
    Vector result( v.size() );
    const size_t dim_ = v.size();

    result = *this;
    for( int i = 0; i < dim_; i++ ) result[i] *= scalar;
}

bool Vector::operator ==( const Vector &v ){

}

double Vector::dim( ) const{
    return v.size();
}

double Vector::norm( ) const{
    return scalarProduct( *this );
}

double Vector::scalarProduct( const Vector &v_ ) const{
    const size_t dim_ = v_.dim();
    double result(0.0);

    for( size_t i = 0; i < dim_; i++ ){
        result += v[i] * v_[i]; // совсем не очень смотрится
    }
}

// затычка
Vector Vector::crossProduct ( const Vector &v ) const{
    Vector v();
    return v;
}
    
double Vector::angleBetween ( const Vector &v ) const{
    return 0;
}

void Vector::normalize(){
    if( isNull() ) return;

    const size_t dim = v.size();
    double norm_ = norm();

    for( size_t i = 0; i < dim; i++ ) v[i] /= norm_;
}

bool Vector::isNull() const{
    return false;
}

double Vector::operator[]( size_t index ) const{
    if( isOutOfrange( index ) ) throw MathOutRangeException( "From Vector::operator[]" );
    return v[index];
}
   
double& Vector::operator[]( size_t index ){
    if( isOutOfrange( index ) ) throw MathOutRangeException( "From Vector::operator[]" );
    return v[index];
}

bool Vector::isOutOfrange( size_t index ) const {
    return ( index < 0 || index > dim() );
}

};