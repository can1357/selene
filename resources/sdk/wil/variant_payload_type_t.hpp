#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_VariantPayloadType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class variant_payload_type_t : int32_t
    {                                          
        none =  0x0,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed = 0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
