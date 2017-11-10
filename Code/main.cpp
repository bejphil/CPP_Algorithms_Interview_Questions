#include <iostream>
#include "test_run_time_pi.h"
#include "test_meta_pi.h"

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;

//    wbp::test::run_gregory_pi_problematic();
    wbp::test::run_gregory_pi();

    std::cout << wbp::compute_meta_pi<101>() << std::endl;
//    wbp::test::run_power_pi();
}
