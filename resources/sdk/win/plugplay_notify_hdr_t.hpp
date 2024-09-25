#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/plugplay_notify_hdr_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_NOTIFY_HDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_notify_hdr_t       
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 uint16_t          version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          size;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t event;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
                                       
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_NOTIFY_HDR.$", 0x14, true, 0xede47e8b74a1e101 );        
        SDK_FIXED_SIZE( plugplay_notify_hdr_t, 0x14 );        
    };                                 
};
#include "magic/plugplay_notify_hdr_t.end.hpp"
SDK_VERIFY( struct win::plugplay_notify_hdr_t, 0x14 );
