#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_FeatureVariantPayloadKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_variant_payload_kind_t : int32_t
    {                                                  
        none =     0x0,                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resident = 0x1,                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        external = 0x2,                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
