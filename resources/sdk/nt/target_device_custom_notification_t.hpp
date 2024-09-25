#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/target_device_custom_notification_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _TARGET_DEVICE_CUSTOM_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct target_device_custom_notification_t            
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                
        _m00 uint16_t                  version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                  size;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t         event;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
        _m03 struct nt::file_object_t* file_object;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileObject
        _m04 int32_t                   name_buffer_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NameBufferOffset
        _m05 sdk::array<uint8_t, 1>    custom_data_buffer;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CustomDataBuffer
                                                          
        SDK_NONVOL_PROPERTIES( "_TARGET_DEVICE_CUSTOM_NOTIFICATION.$", 0x28, true, 0x51092dc8411e1ff0 );                   
        SDK_FIXED_SIZE( target_device_custom_notification_t, 0x28 );                   
    };                                                    
};
#include "magic/target_device_custom_notification_t.end.hpp"
SDK_VERIFY( struct nt::target_device_custom_notification_t, 0x28 );
