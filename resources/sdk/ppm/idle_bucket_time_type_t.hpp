#pragma once
#include <sdkgen/support_library.hpp>

namespace ppm
{
    // [enum PPM_IDLE_BUCKET_TIME_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class idle_bucket_time_type_t : int32_t
    {                                           
        in_qpc =  0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in100ns = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum = 0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
