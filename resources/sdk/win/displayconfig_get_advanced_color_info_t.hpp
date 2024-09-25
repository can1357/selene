#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_color_encoding_t.hpp"
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_get_advanced_color_info_t.start.hpp"
namespace win
{
    // [struct _DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_get_advanced_color_info_t                                        
    {                                                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                
        _m00 struct win::displayconfig_device_info_header_t header;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint1_t                                        advanced_color_supported;       //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .advancedColorSupported
        _m02 uint1_t                                        advanced_color_enabled;         //{ +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  } | .advancedColorEnabled
        _m03 uint1_t                                        wide_color_enforced;            //{ +0x0014@2  +0x0014@2  +0x0014@2  +0x0014@2  } | .wideColorEnforced
        _m04 uint1_t                                        advanced_color_force_disabled;  //{ +0x0014@3  +0x0014@3  +0x0014@3  +0x0014@3  } | .advancedColorForceDisabled
        _m05 uint32_t                                       value;                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .value
        _m06 enum win::displayconfig_color_encoding_t       color_encoding;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .colorEncoding
        _m07 uint32_t                                       bits_per_color_channel;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .bitsPerColorChannel
                                                                                          
        SDK_NONVOL_PROPERTIES( "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.$", 0x20, true, 0x57a10082cc80e60 );                              
        SDK_FIXED_SIZE( displayconfig_get_advanced_color_info_t, 0x20 );                              
    };                                                                                    
};
#include "magic/displayconfig_get_advanced_color_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_get_advanced_color_info_t, 0x20 );
