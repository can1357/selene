#pragma once
#include <sdkgen/support_library.hpp>
#include "log_parameter_t.hpp"

#include "magic/log_page_t.start.hpp"
namespace nt
{
    // [struct _LOG_PAGE]
    // => WDK 10 (NV)
    //
    struct log_page_t                                             
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint6_t                                page_code;      //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                                spf;            //{ +0x0000@6  } | .SPF
        _m02 uint1_t                                ds;             //{ +0x0000@7  } | .DS
        _m03 uint8_t                                sub_page_code;  //{ +0x0001    } | .SubPageCode
        _m04 sdk::array<uint8_t, 2>                 page_length;    //{ +0x0002    } | .PageLength
        _m05 sdk::array<struct nt::log_parameter_t> parameters;     //{ +0x0004    } | .Parameters
                                                                  
        SDK_NONVOL_PROPERTIES( "_LOG_PAGE.$", 0x0, false, 0x929ba16c40a8142 );              
        SDK_FIXED_SIZE( log_page_t, 0x4 );                        
    };                                                            
};
#include "magic/log_page_t.end.hpp"
SDK_VERIFY( struct nt::log_page_t, 0x4 );
