#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_mrw_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_MRW_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_mrw_page_t        
    {                             
        // WDK 10                 
        //                        
        _m00 uint6_t page_code;     //{ +0x0000@0  } | .PageCode
        _m01 uint1_t page_savable;  //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t page_length;   //{ +0x0001    } | .PageLength
        _m03 uint1_t lba_space;     //{ +0x0003@0  } | .LbaSpace
                                  
        SDK_NONVOL_PROPERTIES( "_MODE_MRW_PAGE.$", 0x0, false, 0xc03bccb13372f2e6 );             
        SDK_FIXED_SIZE( mode_mrw_page_t, 0x8 );             
    };                            
};
#include "magic/mode_mrw_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_mrw_page_t, 0x8 );
