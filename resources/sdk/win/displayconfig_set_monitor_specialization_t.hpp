#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_set_monitor_specialization_t.start.hpp"
namespace win
{
    // [struct _DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION]
    // => Windows 11
    //
    struct displayconfig_set_monitor_specialization_t                                       
    {                                                                                       
        // Windows 11                                                                       
        //                                                                                  
        _m00 struct win::displayconfig_device_info_header_t header;                           //{ +0x0000    } | .header
        _m01 uint1_t                                        is_specialization_enabled;        //{ +0x0014@0  } | .isSpecializationEnabled
        _m02 uint32_t                                       value;                            //{ +0x0014    } | .value
        _m03 struct nt::guid_t                              specialization_type;              //{ +0x0018    } | .specializationType
        _m04 struct nt::guid_t                              specialization_sub_type;          //{ +0x0028    } | .specializationSubType
        _m05 sdk::array<wchar_t, 128>                       specialization_application_name;  //{ +0x0038    } | .specializationApplicationName
                                                                                            
        SDK_MAGIC_PROPERTIES( "_DISPLAYCONFIG_SET_MONITOR_SPECIALIZATION.$", 0x0, false, 0x62f203b4b87b632d );                                
        SDK_FIXED_SIZE( displayconfig_set_monitor_specialization_t, 0x138 );                                
    };                                                                                      
};
#include "magic/displayconfig_set_monitor_specialization_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_set_monitor_specialization_t, 0x138 );
