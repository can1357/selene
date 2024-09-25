#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_HDR_METADATA_TYPE]
    //  WDK 10
    //
    enum class hdr_metadata_type_t : int32_t
    {                                       
        none =      0x0,                      // WDK 10
        hdr10 =     0x1,                      // WDK 10
        hdr10plus = 0x2,                      // WDK 10
    };                                      
};
