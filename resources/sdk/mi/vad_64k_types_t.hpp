#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_VAD_64K_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vad_64k_types_t : int32_t
    {                                   
        vad64k_private = 0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vad64k_shared =  0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vad64k_types =   0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
