#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/background_scan_status_t.start.hpp"
namespace nt
{
    // [struct _BACKGROUND_SCAN_STATUS]
    // => WDK 10 (NV)
    //
    struct background_scan_status_t                        
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 sdk::array<uint8_t, 4> power_on_minutes;        //{ +0x0000    } | .PowerOnMinutes
        _m01 uint8_t                scan_status;             //{ +0x0005    } | .ScanStatus
        _m02 sdk::array<uint8_t, 2> scans_performed;         //{ +0x0006    } | .ScansPerformed
        _m03 sdk::array<uint8_t, 2> scan_progress;           //{ +0x0008    } | .ScanProgress
        _m04 sdk::array<uint8_t, 2> medium_scans_performed;  //{ +0x000a    } | .MediumScansPerformed
                                                           
        SDK_NONVOL_PROPERTIES( "_BACKGROUND_SCAN_STATUS.$", 0x0, false, 0xd8873828f60b6c26 );                       
        SDK_FIXED_SIZE( background_scan_status_t, 0xc );                       
    };                                                     
};
#include "magic/background_scan_status_t.end.hpp"
SDK_VERIFY( struct nt::background_scan_status_t, 0xc );
