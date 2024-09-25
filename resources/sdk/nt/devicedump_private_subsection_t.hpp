#pragma once
#include <sdkgen/support_library.hpp>
#include "gp_log_page_descriptor_t.hpp"

#include "magic/devicedump_private_subsection_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_PRIVATE_SUBSECTION]
    // => WDK 10 (NV)
    //
    struct devicedump_private_subsection_t                 
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t                            dw_flags;   //{ +0x0000    } | .dwFlags
        _m01 struct nt::gp_log_page_descriptor_t gp_log_id;  //{ +0x0004    } | .GPLogId
        _m02 sdk::array<uint8_t, 1>              b_data;     //{ +0x0008    } | .bData
                                                           
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_PRIVATE_SUBSECTION.$", 0x0, false, 0x807b2838d6ad2ecb );          
        SDK_FIXED_SIZE( devicedump_private_subsection_t, 0x9 );          
    };                                                     
};
#include "magic/devicedump_private_subsection_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_private_subsection_t, 0x9 );
