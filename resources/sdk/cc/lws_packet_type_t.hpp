#pragma once
#include <sdkgen/support_library.hpp>

namespace cc
{
    // [enum _CC_LWS_PACKET_TYPE]
    //  Windows 11
    //
    enum class lws_packet_type_t : int32_t
    {                                     
        invalid =     0x0,                  // Windows 11
        partition =   0x1,                  // Windows 11
        private_vcm = 0x2,                  // Windows 11
        max =         0x3,                  // Windows 11
    };                                    
};
