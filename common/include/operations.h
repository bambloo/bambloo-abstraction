#ifndef __BAMBLOO_INTOPS__
#define __BAMBLOO_INTOPS__

#include <common.h>
#include <result.h>
#include <optional>

#ifdef BAMBLOO_WINDOWS
#include <intsafe.h>
#endif

namespace bambloo {

#ifdef BAMBLOO_64BITS
inline BRESULT size_t_mul(size_t multiplicand, size_t multiplier, size_t* result) {
    return (ULongLongMult(multiplicand, multiplier, result) == S_OK) ? BRESULT_SUCCESS : BRESULT_OVERFLOW;
}
#endif

inline std::optional<size_t> checked_mul(size_t x, size_t y) {
    size_t res;
    if (size_t_mul(x, y, &res) != BRESULT_SUCCESS) {
        return std::nullopt;
    }
    return res;
}
}

#endif