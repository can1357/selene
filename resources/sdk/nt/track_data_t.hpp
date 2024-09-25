#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_data_t.start.hpp"
namespace nt
{
    // [struct _TRACK_DATA]
    // => WDK 10 (NV)
    //
    struct track_data_t                          
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint4_t                control;       //{ +0x0001@0  } | .Control
        _m01 uint4_t                adr;           //{ +0x0001@4  } | .Adr
        _m02 uint8_t                track_number;  //{ +0x0002    } | .TrackNumber
        _m03 sdk::array<uint8_t, 4> address;       //{ +0x0004    } | .Address
                                                 
        SDK_NONVOL_PROPERTIES( "_TRACK_DATA.$", 0x0, false, 0x396e853ed897a347 );             
        SDK_FIXED_SIZE( track_data_t, 0x8 );             
    };                                           
};
#include "magic/track_data_t.end.hpp"
SDK_VERIFY( struct nt::track_data_t, 0x8 );
