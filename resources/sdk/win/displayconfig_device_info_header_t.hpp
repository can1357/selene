#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"
#include "displayconfig_device_info_type_t.hpp"

#include "magic/displayconfig_device_info_header_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_DEVICE_INFO_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_device_info_header_t                   
    {                                                           
        enum class u0_type_t : int32_t                          
        {                                                       
            force_uint32 =                   -0x1,                // WDK 10
            get_source_name =                0x1,                 // WDK 10
            get_target_name =                0x2,                 // WDK 10
            get_target_preferred_mode =      0x3,                 // WDK 10
            get_adapter_name =               0x4,                 // WDK 10
            set_target_persistence =         0x5,                 // WDK 10
            get_target_base_type =           0x6,                 // WDK 10
            get_support_virtual_resolution = 0x7,                 // WDK 10
            set_support_virtual_resolution = 0x8,                 // WDK 10
            get_advanced_color_info =        0x9,                 // WDK 10
            set_advanced_color_state =       0xa,                 // WDK 10
            get_sdr_white_level =            0xb,                 // WDK 10
        };                                                      
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                      
        _m00 int32_t                                 type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .type
        _m01 uint32_t                                size;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .size
        _m02 struct nt::luid_t                       adapter_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .adapterId
        _m03 uint32_t                                id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .id
                                                                
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_DEVICE_INFO_HEADER.$", 0x14, true, 0x2cd85d2f070cbf5f );           
        SDK_FIXED_SIZE( displayconfig_device_info_header_t, 0x14 );           
    };                                                          
};
#include "magic/displayconfig_device_info_header_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_device_info_header_t, 0x14 );
