#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_view_t.start.hpp"
namespace win
{
    // [struct _PORT_VIEW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct port_view_t                 
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t length;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 void*    section_handle;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SectionHandle
        _m02 uint32_t section_offset;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SectionOffset
        _m03 uint64_t view_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ViewSize
        _m04 void*    view_base;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ViewBase
        _m05 void*    view_remote_base;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ViewRemoteBase
                                       
        SDK_NONVOL_PROPERTIES( "_PORT_VIEW.$", 0x30, true, 0x1ea398838d4c9e54 );                 
        SDK_FIXED_SIZE( port_view_t, 0x30 );                 
    };                                 
};
#include "magic/port_view_t.end.hpp"
SDK_VERIFY( struct win::port_view_t, 0x30 );
