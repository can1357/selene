#pragma once
#include <sdkgen/support_library.hpp>
#include "sub_q_header_t.hpp"

#include "magic/sub_q_current_position_t.start.hpp"
namespace nt
{
    // [struct _SUB_Q_CURRENT_POSITION]
    // => WDK 10 (NV)
    //
    struct sub_q_current_position_t                           
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct nt::sub_q_header_t header;                  //{ +0x0000    } | .Header
        _m01 uint8_t                   format_code;             //{ +0x0004    } | .FormatCode
        _m02 uint4_t                   control;                 //{ +0x0005@0  } | .Control
        _m03 uint4_t                   adr;                     //{ +0x0005@4  } | .ADR
        _m04 uint8_t                   track_number;            //{ +0x0006    } | .TrackNumber
        _m05 uint8_t                   index_number;            //{ +0x0007    } | .IndexNumber
        _m06 sdk::array<uint8_t, 4>    absolute_address;        //{ +0x0008    } | .AbsoluteAddress
        _m07 sdk::array<uint8_t, 4>    track_relative_address;  //{ +0x000c    } | .TrackRelativeAddress
                                                              
        SDK_NONVOL_PROPERTIES( "_SUB_Q_CURRENT_POSITION.$", 0x0, false, 0xda46241792725c26 );                       
        SDK_FIXED_SIZE( sub_q_current_position_t, 0x10 );                       
    };                                                        
};
#include "magic/sub_q_current_position_t.end.hpp"
SDK_VERIFY( struct nt::sub_q_current_position_t, 0x10 );
