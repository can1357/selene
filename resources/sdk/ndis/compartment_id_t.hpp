#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum COMPARTMENT_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class compartment_id_t : int32_t   
    {                                       
        unspecified_compartment_id = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_compartment_id =     0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
