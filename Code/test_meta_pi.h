#ifndef TEST_META_PI_H
#define TEST_META_PI_H

#include "meta_pi.h"

namespace wbp {

namespace test {

double metaPi()
{
    return 4.0 * metaPiHelp<1>();
}

}

}

#endif // TEST_META_PI_H
