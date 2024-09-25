#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/elevation_flags_t.start.hpp"
namespace rtl
{
    // [union _RTL_ELEVATION_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union elevation_flags_t                    
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t flags;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  elevation_enabled;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ElevationEnabled
        _m02 uint1_t  virtualization_enabled;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VirtualizationEnabled
        _m03 uint1_t  installer_detect_enabled;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .InstallerDetectEnabled
                                               
        SDK_NONVOL_PROPERTIES( "_RTL_ELEVATION_FLAGS.$", 0x4, true, 0xc780070782224135 );                         
        SDK_FIXED_SIZE( elevation_flags_t, 0x4 );                         
    };                                         
};
#include "magic/elevation_flags_t.end.hpp"
SDK_VERIFY( union rtl::elevation_flags_t, 0x4 );
