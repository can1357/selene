#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SchGetExtensionsOptions]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sch_get_extensions_options_t : int32_t
    {                                                
        extensions_options_none = 0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_record_header =        0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
