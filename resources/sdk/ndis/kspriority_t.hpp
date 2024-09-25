#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kspriority_t.start.hpp"
namespace ndis
{
    // [struct KSPRIORITY]
    // => Windows 10 v1607
    //
    struct kspriority_t                  
    {                                    
        // Windows 10 v1607                   
        //                               
        _m00 uint32_t priority_class;      //{ +0x0000    } | .PriorityClass
        _m01 uint32_t priority_sub_class;  //{ +0x0004    } | .PrioritySubClass
                                         
        SDK_MAGIC_PROPERTIES( "KSPRIORITY.$", 0x0, false, 0x822d34ac1675b7d7 );                   
        SDK_FIXED_SIZE( kspriority_t, 0x8 );                   
    };                                   
};
#include "magic/kspriority_t.end.hpp"
SDK_VERIFY( struct ndis::kspriority_t, 0x8 );
