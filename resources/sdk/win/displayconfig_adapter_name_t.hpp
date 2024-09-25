#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_adapter_name_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_ADAPTER_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_adapter_name_t                                         
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                      
        _m00 struct win::displayconfig_device_info_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 sdk::array<wchar_t, 128>                       adapter_device_path;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .adapterDevicePath
                                                                                
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_ADAPTER_NAME.$", 0x114, true, 0xd831bf0adcbd685c );                    
        SDK_FIXED_SIZE( displayconfig_adapter_name_t, 0x114 );                    
    };                                                                          
};
#include "magic/displayconfig_adapter_name_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_adapter_name_t, 0x114 );
