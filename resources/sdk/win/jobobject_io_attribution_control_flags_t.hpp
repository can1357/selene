#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum JOBOBJECT_IO_ATTRIBUTION_CONTROL_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class jobobject_io_attribution_control_flags_t : int32_t
    {                                                            
        enable =      0x1,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable =     0x2,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_flags = 0x3,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                           
};
