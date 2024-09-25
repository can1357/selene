#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_inactivity_timeout_page_t.start.hpp"
namespace nt
{
    // [struct _CDVD_INACTIVITY_TIMEOUT_PAGE]
    // => WDK 10 (NV)
    //
    struct cdvd_inactivity_timeout_page_t                     
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint6_t                page_code;                  //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                ps_bit;                     //{ +0x0000@7  } | .PSBit
        _m02 uint8_t                page_length;                //{ +0x0001    } | .PageLength
        _m03 uint1_t                swpp;                       //{ +0x0004@0  } | .SWPP
        _m04 uint1_t                disp;                       //{ +0x0004@1  } | .DISP
        _m05 sdk::array<uint8_t, 2> group_one_minimum_timeout;  //{ +0x0006    } | .GroupOneMinimumTimeout
        _m06 sdk::array<uint8_t, 2> group_two_minimum_timeout;  //{ +0x0008    } | .GroupTwoMinimumTimeout
                                                              
        SDK_NONVOL_PROPERTIES( "_CDVD_INACTIVITY_TIMEOUT_PAGE.$", 0x0, false, 0xcc9ea83b0a6f669d );                          
        SDK_FIXED_SIZE( cdvd_inactivity_timeout_page_t, 0xa );                          
    };                                                        
};
#include "magic/cdvd_inactivity_timeout_page_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_inactivity_timeout_page_t, 0xa );
