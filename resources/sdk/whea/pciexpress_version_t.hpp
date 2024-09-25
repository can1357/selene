#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pciexpress_version_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIEXPRESS_VERSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pciexpress_version_t      
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t  minor_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinorVersion
        _m01 uint8_t  major_version;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .MajorVersion
        _m02 uint32_t as_ulong;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIEXPRESS_VERSION.$", 0x4, true, 0x9b056d38cc36b9a3 );              
        SDK_FIXED_SIZE( pciexpress_version_t, 0x4 );              
    };                              
};
#include "magic/pciexpress_version_t.end.hpp"
SDK_VERIFY( union whea::pciexpress_version_t, 0x4 );
