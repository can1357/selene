#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpn_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPN_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpn_serialization_t                                             
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                   
        _m00 uint32_t                size;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t                 num_active_sources;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumActiveSources
        _m02 sdk::array<uint32_t, 1> paths_from_source_serialization_offsets;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PathsFromSourceSerializationOffsets
                                                                             
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPN_SERIALIZATION.$", 0xc, true, 0x8e86f863a2e33a9b );                                        
        SDK_FIXED_SIZE( vidpn_serialization_t, 0xc );                                        
    };                                                                       
};
#include "magic/vidpn_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::vidpn_serialization_t, 0xc );
