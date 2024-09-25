#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxObjectDebugExtensionValues]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_debug_extension_values_t : int32_t
    {                                                   
        //size =    0x20,                                 // Windows 10 v1607
        size =      0x30,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        signature = 0x444f7846,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
