#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListValues]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_values_t : int32_t
    {                                       
        fx_child_list_max_retries = 0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
