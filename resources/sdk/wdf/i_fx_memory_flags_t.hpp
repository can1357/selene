#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum IFxMemoryFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class i_fx_memory_flags_t : int32_t
    {                                       
        i_fx_memory_flag_read_only = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
