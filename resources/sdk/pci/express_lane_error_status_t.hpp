#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_lane_error_status_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_LANE_ERROR_STATUS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_lane_error_status_t
    {                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t lane_bitmap;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LaneBitmap
                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LANE_ERROR_STATUS.$", 0x4, true, 0x25e6dd75a2ee1fc );            
        SDK_FIXED_SIZE( express_lane_error_status_t, 0x4 );            
    };                                
};
#include "magic/express_lane_error_status_t.end.hpp"
SDK_VERIFY( struct pci::express_lane_error_status_t, 0x4 );
