#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ide_channel_record_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IDE_CHANNEL_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ide_channel_record_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                   
        _m00 uint32_t               target_id;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetId
        _m01 uint32_t               device_type;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceType
        _m02 uint32_t               device_timing_mode;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceTimingMode
        _m03 uint32_t               location_information_len;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LocationInformationLen
        _m04 sdk::array<wchar_t, 1> location_information;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LocationInformation
                                                             
        SDK_MAGIC_PROPERTIES( "_WMI_IDE_CHANNEL_RECORD.$", 0x14, true, 0x7874c10edf357456 );                         
        SDK_FIXED_SIZE( ide_channel_record_t, 0x14 );                         
    };                                                       
};
#include "magic/ide_channel_record_t.end.hpp"
SDK_VERIFY( struct wmi::ide_channel_record_t, 0x14 );
