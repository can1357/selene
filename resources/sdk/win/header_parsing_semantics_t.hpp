#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum HeaderParsingSemantics]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class header_parsing_semantics_t : int32_t
    {                                              
        dynamic_byte_swapping = 0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_byte_swapping =      0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
