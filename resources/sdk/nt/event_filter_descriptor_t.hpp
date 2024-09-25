#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_filter_descriptor_t.start.hpp"
namespace nt
{
    // [struct _EVENT_FILTER_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_filter_descriptor_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint64_t ptr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
        _m01 uint32_t size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint32_t type;           //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
                                    
        SDK_NONVOL_PROPERTIES( "_EVENT_FILTER_DESCRIPTOR.$", 0x10, true, 0xf5feff3cfedcddf8 );     
        SDK_FIXED_SIZE( event_filter_descriptor_t, 0x10 );     
    };                              
};
#include "magic/event_filter_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::event_filter_descriptor_t, 0x10 );
