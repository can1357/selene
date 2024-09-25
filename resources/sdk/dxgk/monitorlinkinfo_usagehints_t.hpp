#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/monitorlinkinfo_usagehints_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_MONITORLINKINFO_USAGEHINTS]
    // => WDK 10 (NV)
    //
    union monitorlinkinfo_usagehints_t
    {                                 
        // WDK 10            
        //                   
        _m00 uint1_t  hidden;           //{ +0x0000@0  } | .Hidden
        _m01 uint32_t value;            //{ +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORLINKINFO_USAGEHINTS.$", 0x0, false, 0xea3354e2e9f7d5cd );       
        SDK_FIXED_SIZE( monitorlinkinfo_usagehints_t, 0x4 );       
    };                                
};
#include "magic/monitorlinkinfo_usagehints_t.end.hpp"
SDK_VERIFY( union dxgk::monitorlinkinfo_usagehints_t, 0x4 );
