#pragma once
#include <sdkgen/support_library.hpp>
#include "priority_hint_t.hpp"

#include "magic/priority_info_t.start.hpp"
namespace io
{
    // [struct _IO_PRIORITY_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct priority_info_t                            
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 thread_priority;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadPriority
        _m02 uint32_t                 page_priority;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PagePriority
        _m03 enum io::priority_hint_t io_priority;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .IoPriority
                                                      
        SDK_NONVOL_PROPERTIES( "_IO_PRIORITY_INFO.$", 0x10, true, 0xb65a1ecc42dc2569 );                
        SDK_FIXED_SIZE( priority_info_t, 0x10 );                
    };                                                
};
#include "magic/priority_info_t.end.hpp"
SDK_VERIFY( struct io::priority_info_t, 0x10 );
