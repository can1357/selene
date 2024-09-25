#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorEventAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_event_attr_t : int32_t
    {                                    
        special_name =    0x200,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rt_special_name = 0x400,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_mask =   0x400,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
