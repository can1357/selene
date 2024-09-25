#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorLinkerOptions]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_linker_options_t : int32_t
    {                                        
        md_assembly =   0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_net_module = 0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
