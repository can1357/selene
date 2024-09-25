#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vrb_sg_t.start.hpp"
namespace nt
{
    // [struct __VRB_SG]
    // => WDK 10 (NV)
    //
    struct vrb_sg_t                    
    {                                  
        // WDK 10                      
        //                             
        _m00 int64_t  physical_address;  //{ +0x0000    } | .PhysicalAddress
        _m01 uint32_t length;            //{ +0x0008    } | .Length
                                       
        SDK_NONVOL_PROPERTIES( "__VRB_SG.$", 0x0, false, 0x2222bb849ab9678c );                 
        SDK_FIXED_SIZE( vrb_sg_t, 0x10 );                 
    };                                 
};
#include "magic/vrb_sg_t.end.hpp"
SDK_VERIFY( struct nt::vrb_sg_t, 0x10 );
