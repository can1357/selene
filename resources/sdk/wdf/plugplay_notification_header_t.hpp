#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/plugplay_notification_header_t.start.hpp"
namespace wdf
{
    // [struct _PLUGPLAY_NOTIFICATION_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct plugplay_notification_header_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 uint16_t          version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t event;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
                                         
        SDK_NONVOL_PROPERTIES( "_PLUGPLAY_NOTIFICATION_HEADER.$", 0x14, true, 0x769846da478ef11b );        
        SDK_FIXED_SIZE( plugplay_notification_header_t, 0x14 );        
    };                                   
};
#include "magic/plugplay_notification_header_t.end.hpp"
SDK_VERIFY( struct wdf::plugplay_notification_header_t, 0x14 );
