#pragma once
#include <sdkgen/support_library.hpp>
#include "sub_q_header_t.hpp"

#include "magic/sub_q_track_isrc_t.start.hpp"
namespace nt
{
    // [struct _SUB_Q_TRACK_ISRC]
    // => WDK 10 (NV)
    //
    struct sub_q_track_isrc_t                      
    {                                              
        // WDK 10                                  
        //                                         
        _m00 struct nt::sub_q_header_t header;       //{ +0x0000    } | .Header
        _m01 uint8_t                   format_code;  //{ +0x0004    } | .FormatCode
        _m02 uint8_t                   track;        //{ +0x0006    } | .Track
        _m03 uint1_t                   tcval;        //{ +0x0008@7  } | .Tcval
        _m04 sdk::array<uint8_t, 15>   track_isrc;   //{ +0x0009    } | .TrackIsrc
                                                   
        SDK_NONVOL_PROPERTIES( "_SUB_Q_TRACK_ISRC.$", 0x0, false, 0xa94021dea13bad30 );            
        SDK_FIXED_SIZE( sub_q_track_isrc_t, 0x18 );            
    };                                             
};
#include "magic/sub_q_track_isrc_t.end.hpp"
SDK_VERIFY( struct nt::sub_q_track_isrc_t, 0x18 );
