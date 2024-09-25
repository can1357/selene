#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/condition_page_t.start.hpp"
namespace power
{
    // [struct _POWER_CONDITION_PAGE]
    // => WDK 10 (NV)
    //
    struct condition_page_t                       
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint6_t                page_code;      //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                ps_bit;         //{ +0x0000@7  } | .PSBit
        _m02 uint8_t                page_length;    //{ +0x0001    } | .PageLength
        _m03 uint1_t                standby;        //{ +0x0003@0  } | .Standby
        _m04 uint1_t                idle;           //{ +0x0003@1  } | .Idle
        _m05 sdk::array<uint8_t, 4> idle_timer;     //{ +0x0004    } | .IdleTimer
        _m06 sdk::array<uint8_t, 4> standby_timer;  //{ +0x0008    } | .StandbyTimer
                                                  
        SDK_NONVOL_PROPERTIES( "_POWER_CONDITION_PAGE.$", 0x0, false, 0xb2a96ead0ace9879 );              
        SDK_FIXED_SIZE( condition_page_t, 0xc );              
    };                                            
};
#include "magic/condition_page_t.end.hpp"
SDK_VERIFY( struct power::condition_page_t, 0xc );
