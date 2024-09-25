#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_sdr_white_level_t.start.hpp"
namespace win
{
    // [struct _DISPLAYCONFIG_SDR_WHITE_LEVEL]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_sdr_white_level_t                                  
    {                                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                  
        _m00 struct win::displayconfig_device_info_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint32_t                                       sdr_white_level;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SDRWhiteLevel
                                                                            
        SDK_NONVOL_PROPERTIES( "_DISPLAYCONFIG_SDR_WHITE_LEVEL.$", 0x18, true, 0xd2ef024ae28d2e5e );                
        SDK_FIXED_SIZE( displayconfig_sdr_white_level_t, 0x18 );                
    };                                                                      
};
#include "magic/displayconfig_sdr_white_level_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_sdr_white_level_t, 0x18 );
