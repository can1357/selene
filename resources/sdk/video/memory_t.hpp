#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_t.start.hpp"
namespace video
{
    // [struct _VIDEO_MEMORY]
    // => WDK 10 (NV)
    //
    struct memory_t                          
    {                                        
        // WDK 10                            
        //                                   
        _m00 void* requested_virtual_address;  //{ +0x0000    } | .RequestedVirtualAddress
                                             
        SDK_NONVOL_PROPERTIES( "_VIDEO_MEMORY.$", 0x0, false, 0x151b0b3a72de45d1 );                          
        SDK_FIXED_SIZE( memory_t, 0x8 );                          
    };                                       
};
#include "magic/memory_t.end.hpp"
SDK_VERIFY( struct video::memory_t, 0x8 );
