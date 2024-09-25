#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagINPUT_MESSAGE_ORIGIN_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_message_origin_id_t : int32_t
    {                                             
        unavailable = 0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware =    0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        injected =    0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =      0x4,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
