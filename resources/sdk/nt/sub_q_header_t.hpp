#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sub_q_header_t.start.hpp"
namespace nt
{
    // [struct _SUB_Q_HEADER]
    // => WDK 10 (NV)
    //
    struct sub_q_header_t                        
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint8_t                audio_status;  //{ +0x0001    } | .AudioStatus
        _m01 sdk::array<uint8_t, 2> data_length;   //{ +0x0002    } | .DataLength
                                                 
        SDK_NONVOL_PROPERTIES( "_SUB_Q_HEADER.$", 0x0, false, 0x6fef8d618eca9352 );             
        SDK_FIXED_SIZE( sub_q_header_t, 0x4 );             
    };                                           
};
#include "magic/sub_q_header_t.end.hpp"
SDK_VERIFY( struct nt::sub_q_header_t, 0x4 );
