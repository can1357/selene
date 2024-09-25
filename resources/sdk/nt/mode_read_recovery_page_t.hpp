#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_read_recovery_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_READ_RECOVERY_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_read_recovery_page_t  
    {                                 
        // WDK 10                     
        //                            
        _m00 uint6_t page_code;         //{ +0x0000@0  } | .PageCode
        _m01 uint1_t ps_bit;            //{ +0x0000@7  } | .PSBit
        _m02 uint8_t page_length;       //{ +0x0001    } | .PageLength
        _m03 uint1_t dcr_bit;           //{ +0x0002@0  } | .DCRBit
        _m04 uint1_t dte_bit;           //{ +0x0002@1  } | .DTEBit
        _m05 uint1_t per_bit;           //{ +0x0002@2  } | .PERBit
        _m06 uint1_t rc_bit;            //{ +0x0002@4  } | .RCBit
        _m07 uint1_t tb_bit;            //{ +0x0002@5  } | .TBBit
        _m08 uint8_t read_retry_count;  //{ +0x0003    } | .ReadRetryCount
                                      
        SDK_NONVOL_PROPERTIES( "_MODE_READ_RECOVERY_PAGE.$", 0x0, false, 0x262ad45ae79527fb );                 
        SDK_FIXED_SIZE( mode_read_recovery_page_t, 0x8 );                 
    };                                
};
#include "magic/mode_read_recovery_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_read_recovery_page_t, 0x8 );
