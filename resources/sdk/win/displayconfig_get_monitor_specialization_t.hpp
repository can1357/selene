#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_get_monitor_specialization_t.start.hpp"
namespace win
{
    // [struct _DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION]
    // => Windows 11
    //
    struct displayconfig_get_monitor_specialization_t                                               
    {                                                                                               
        // Windows 11                                                                               
        //                                                                                          
        _m00 struct win::displayconfig_device_info_header_t header;                                   //{ +0x0000    } | .header
        _m01 uint1_t                                        is_specialization_enabled;                //{ +0x0014@0  } | .isSpecializationEnabled
        _m02 uint1_t                                        is_specialization_available_for_monitor;  //{ +0x0014@1  } | .isSpecializationAvailableForMonitor
        _m03 uint1_t                                        is_specialization_available_for_system;   //{ +0x0014@2  } | .isSpecializationAvailableForSystem
        _m04 uint32_t                                       value;                                    //{ +0x0014    } | .value
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_DISPLAYCONFIG_GET_MONITOR_SPECIALIZATION.$", 0x0, false, 0x3427266f93b5b586 );                                        
        SDK_FIXED_SIZE( displayconfig_get_monitor_specialization_t, 0x18 );                                        
    };                                                                                              
};
#include "magic/displayconfig_get_monitor_specialization_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_get_monitor_specialization_t, 0x18 );
