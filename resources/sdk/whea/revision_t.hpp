#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/revision_t.start.hpp"
namespace whea
{
    // [union _WHEA_REVISION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union revision_t                 
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  minor_revision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinorRevision
        _m01 uint8_t  major_revision;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .MajorRevision
        _m02 uint16_t as_ushort;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_REVISION.$", 0x2, true, 0xd27d0f7cb2a344d7 );               
        SDK_FIXED_SIZE( revision_t, 0x2 );               
    };                               
};
#include "magic/revision_t.end.hpp"
SDK_VERIFY( union whea::revision_t, 0x2 );
