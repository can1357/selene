#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualization_instance_info_input_ex_t.start.hpp"
namespace win
{
    // [struct _VIRTUALIZATION_INSTANCE_INFO_INPUT_EX]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtualization_instance_info_input_ex_t
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint16_t header_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t flags;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t notification_info_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NotificationInfoSize
        _m03 uint16_t notification_info_offset;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NotificationInfoOffset
        _m04 uint16_t provider_major_version;       //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ProviderMajorVersion
                                                  
        SDK_NONVOL_PROPERTIES( "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.$", 0x10, true, 0x9793ad58727fb129 );                         
        SDK_FIXED_SIZE( virtualization_instance_info_input_ex_t, 0x10 );                         
    };                                            
};
#include "magic/virtualization_instance_info_input_ex_t.end.hpp"
SDK_VERIFY( struct win::virtualization_instance_info_input_ex_t, 0x10 );
