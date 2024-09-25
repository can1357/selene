#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FREQUENCY_QOS_BUCKET]
    //  Windows 11
    //
    enum class frequency_qos_bucket_t : int32_t
    {                                          
        high =  0x0,                             // Windows 11
        low =   0x1,                             // Windows 11
        total = 0x2,                             // Windows 11
        max =   0x3,                             // Windows 11
    };                                         
};
