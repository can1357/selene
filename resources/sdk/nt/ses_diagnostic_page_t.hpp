#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_diagnostic_page_t.start.hpp"
namespace nt
{
    // [struct _SES_DIAGNOSTIC_PAGE]
    // => WDK 10 (NV)
    //
    struct ses_diagnostic_page_t                
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint8_t                page_code;    //{ +0x0000    } | .PageCode
        _m01 sdk::array<uint8_t, 2> page_length;  //{ +0x0002    } | .PageLength
        _m02 sdk::array<uint8_t, 1> page_data;    //{ +0x0004    } | .PageData
                                                
        SDK_NONVOL_PROPERTIES( "_SES_DIAGNOSTIC_PAGE.$", 0x0, false, 0x17355bcb2537f479 );            
        SDK_FIXED_SIZE( ses_diagnostic_page_t, 0x5 );            
    };                                          
};
#include "magic/ses_diagnostic_page_t.end.hpp"
SDK_VERIFY( struct nt::ses_diagnostic_page_t, 0x5 );
