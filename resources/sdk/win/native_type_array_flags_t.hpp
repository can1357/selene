#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum NativeTypeArrayFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class native_type_array_flags_t : int32_t
    {                                             
        size_param_index_specified = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved =                   0xfffe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
