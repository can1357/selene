#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_DEVICE_IDLE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_idle_type_t : int32_t
    {                                      
        normal = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disk =   0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
