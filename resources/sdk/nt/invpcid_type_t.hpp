#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INVPCID_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class invpcid_type_t : int32_t  
    {                                    
        individual_address =      0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        single_context =          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_context_and_globals = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_context =             0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
