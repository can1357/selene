#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpnset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPNSET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpnset_serialization_t                
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint8_t                 num_vid_pns;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumVidPns
        _m01 sdk::array<uint32_t, 1> vid_pn_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VidPnOffset
                                                   
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPNSET_SERIALIZATION.$", 0x8, true, 0x466f1d74e6c7f144 );              
        SDK_FIXED_SIZE( vidpnset_serialization_t, 0x8 );              
    };                                             
};
#include "magic/vidpnset_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::vidpnset_serialization_t, 0x8 );
