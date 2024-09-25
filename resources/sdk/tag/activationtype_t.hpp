#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagACTIVATIONTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activationtype_t : int32_t
    {                                    
        uncategorized = 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_moniker =  0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_data =     0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_storage =  0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_stream =   0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_file =     0x10,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
