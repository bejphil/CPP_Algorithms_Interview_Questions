#ifndef META_PI_H
#define META_PI_H

#include <exception>

namespace wbp {

// General case
template<unsigned int N, typename T = double>
struct GregorySum {
    static constexpr T sum = ( (N % 2) ? 1.0 : -1.0 ) / ( 2*N - 1 )  +  GregorySum<N - 1, T>::sum;
};

// Specialized stop case
template<typename T>
struct GregorySum<1, T> {
    static constexpr T sum = 1;
};

template< unsigned int N >
double compute_meta_pi() {
    return 4.0*GregorySum< N >::sum;
}

}

#endif // META_PI_H
