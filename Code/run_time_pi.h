#ifndef RUN_TIME_PI_H
#define RUN_TIME_PI_H

#include <cmath>
#include <cstdint>
#include <type_traits>
#include <omp.h>//OpenMP pragmas

namespace wbp {

template< typename T >
T partial_sum( T (*f)(uint index), uint sum_start, uint sum_end ) {

    T sum_total = static_cast<T>( 0 );

    for( uint i = sum_start; i <= sum_end ; i++ ) {
        sum_total += f(i);
    }

    return sum_total;

}

template < typename T >
T alt_sign( uint k ) {
    return ( ( k + 1 )%2 == 0 )?( static_cast<T>( 1 ) ):( static_cast<T>( -1 ) );
}

template < typename T >
T gregory_term( uint k ) {

    return alt_sign<T>( k )*static_cast<T>(1) / static_cast<T>( 2*k - 1 );
}

template < typename T >
T gregory_term_problematic( uint k ) {

    return ( gregory_term<T>( k ) + gregory_term<T>( k + 1 ) );
}

template < typename T >
T pow_term( uint k ) {

    return static_cast<T>( 1 )/static_cast<T>( k * k );

}

template< typename T >
T gregory_pi( uint num_iter ) {

    static_assert( std::is_floating_point<T>::value, "Template parameter must be a floating-point value.");
    return static_cast<T>( 4 )*partial_sum( &gregory_term<T>, 1, num_iter );

}

template< typename T >
T gregory_pi_problematic( uint num_iter ) {

    static_assert( std::is_floating_point<T>::value, "Template parameter must be a floating-point value.");
    return static_cast<T>( 4 )*partial_sum( &gregory_term_problematic<T>, 1, num_iter );

}

template< typename T >
T power_pi( uint num_iter ) {

    static_assert( std::is_floating_point<T>::value, "Template parameter must be a floating-point value.");
    return std::sqrt( static_cast<T>( 6 )*partial_sum( &pow_term<T>, 1, num_iter ) );

}

}

#endif // RUN_TIME_PI_H
