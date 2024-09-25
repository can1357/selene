#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_filter_header_t.start.hpp"
namespace nt
{
    // [struct _EVENT_FILTER_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_filter_header_t  
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint8_t  version;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint64_t instance_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceId
        _m03 uint32_t size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m04 uint32_t next_offset;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .NextOffset
                                  
        SDK_NONVOL_PROPERTIES( "_EVENT_FILTER_HEADER.$", 0x18, true, 0xc47bc50c230206e4 );            
        SDK_FIXED_SIZE( event_filter_header_t, 0x18 );            
    };                            
};
#include "magic/event_filter_header_t.end.hpp"
SDK_VERIFY( struct nt::event_filter_header_t, 0x18 );
