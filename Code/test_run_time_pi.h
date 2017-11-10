#ifndef TEST_RUN_TIME_PI_H
#define TEST_RUN_TIME_PI_H

#include "run_time_pi.h"

namespace wbp {

namespace test {

void test_alt_sign() {
    std::cout << "Testing alternating sign" << std::endl;

    std::cout << "k = 2"
              << alt_sign<double>( 2 )
              << " k = 3 "
              << alt_sign<double>( 3 )
              << std::endl;
}

void test_part_sum() {
    std::cout << "Testing partial sum" << std::endl;

}

void run_gregory_pi() {

    std::cout << "Testing Gregory sum method for estimating pi, using double-precision arithmetic." << std::endl;

    for( uint k = 1; k <= 101; k += 10 ) {

        std::cout << "Using a series with "
                  << k
                  << " terms."
                  << std::endl;

        double estimate = gregory_pi<double>( k );
        double delta = std::abs( M_PI - estimate );


        std::cout << "Estimate value of pi: "
                  << estimate
                  << std::endl;

        std::cout << "Approximate error "
                  << delta
                  << std::endl;
    }
}

void run_gregory_pi_problematic() {

    std::cout << "Testing Gregory sum method for estimating pi, using single-precision arithmetic." << std::endl;

    for( uint k = 1; k <= 10001; k += 10 ) {

        std::cout << "Using a series with "
                  << k
                  << " terms."
                  << std::endl;

        double estimate = gregory_pi_problematic<double>( k );
        double delta = std::abs( M_PI - estimate );


        std::cout << "Estimate value of pi: "
                  << estimate
                  << std::endl;

        std::cout << "Approximate error "
                  << delta
                  << std::endl;
    }
}

void run_power_pi() {

    std::cout << "Testing Power sum method for estimating pi, using double-precision arithmetic." << std::endl;

    for( uint k = 1; k <= 101; k += 10 ) {

        std::cout << "Using a series with "
                  << k
                  << " terms."
                  << std::endl;

        double estimate = power_pi<double>( k );
        double delta = std::abs( M_PI - estimate );

        std::cout << "Estimate value of pi: "
                  << estimate
                  << std::endl;

        std::cout << "Approximate error "
                  << delta
                  << std::endl;
    }
}

}

}

#endif // TEST_RUN_TIME_PI_H
