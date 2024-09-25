#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/share_memory_t.start.hpp"
namespace video
{
    // [struct _VIDEO_SHARE_MEMORY]
    // => WDK 10 (NV)
    //
    struct share_memory_t                       
    {                                           
        // WDK 10                               
        //                                      
        _m00 void*    process_handle;             //{ +0x0000    } | .ProcessHandle
        _m01 uint32_t view_offset;                //{ +0x0008    } | .ViewOffset
        _m02 uint32_t view_size;                  //{ +0x000c    } | .ViewSize
        _m03 void*    requested_virtual_address;  //{ +0x0010    } | .RequestedVirtualAddress
                                                
        SDK_NONVOL_PROPERTIES( "_VIDEO_SHARE_MEMORY.$", 0x0, false, 0xe35217ba3e9be5e9 );                          
        SDK_FIXED_SIZE( share_memory_t, 0x18 );                          
    };                                          
};
#include "magic/share_memory_t.end.hpp"
SDK_VERIFY( struct video::share_memory_t, 0x18 );
