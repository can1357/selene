#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_VOICE_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class voice_class_t : int32_t   
    {                                    
        unknown =                 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_voice =                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        separate_voice_data =     0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        simultaneous_voice_data = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                     0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
