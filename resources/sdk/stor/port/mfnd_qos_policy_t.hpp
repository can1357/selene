#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _MFND_QOS_POLICY]
    //  Windows 11
    //
    enum class mfnd_qos_policy_t : int32_t
    {                                     
        reserve = 0x1,                      // Windows 11
        limit =   0x2,                      // Windows 11
        mix =     0x3,                      // Windows 11
    };                                    
};
