#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_data_descriptor_t.start.hpp"
namespace nt
{
    // [struct _EVENT_DATA_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_data_descriptor_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint64_t ptr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
        _m01 uint32_t size;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint8_t  type;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
                                  
        SDK_NONVOL_PROPERTIES( "_EVENT_DATA_DESCRIPTOR.$", 0x10, true, 0x6ed72769371c2e27 );     
        SDK_FIXED_SIZE( event_data_descriptor_t, 0x10 );     
    };                            
};
#include "magic/event_data_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::event_data_descriptor_t, 0x10 );
