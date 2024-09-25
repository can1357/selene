#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum ETW_PROVIDER_TRAIT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class provider_trait_type_t : int32_t
    {                                         
        type_group =  0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decode_guid = 0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //type_max =  0x2,                      // Windows 10 v1607
        type_max =    0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
