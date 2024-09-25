#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum RdTypeBases]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rd_type_bases_t : int32_t
    {                                   
        rd_type_object_base = 0x10,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
