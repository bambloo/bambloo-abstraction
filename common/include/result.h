#ifndef __BAMBLOO_RESULT__
#define __BAMBLOO_RESULT__

namespace bambloo {
enum BRESULT : size_t{
    BRESULT_SUCCESS = 0,
    BRESULT_FAILED = 1,

    BRESULT_OVERFLOW = 2
};
}

#endif