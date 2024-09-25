#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_histogram
{
    // [Create@KHistogram]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x121830, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [IncrementBucket@KHistogram]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x6e7b4, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) increment_bucket;
};
#include "magic/api.end.hpp"
