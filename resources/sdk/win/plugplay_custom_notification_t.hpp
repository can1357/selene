#pragma once
#include <sdkgen/support_library.hpp>
#include "plugplay_notify_hdr_t.hpp"

#include "magic/plugplay_custom_notification_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CUSTOM_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_custom_notification_t                         
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 struct win::plugplay_notify_hdr_t header_info;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderInfo
        _m01 void*                             file_object;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileObject
        _m02 int32_t                           name_buffer_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NameBufferOffset
        _m03 sdk::array<uint8_t, 1>            custom_data_buffer;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CustomDataBuffer
                                                                  
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CUSTOM_NOTIFICATION.$", 0x28, true, 0x24c83bf94357c4c8 );                   
        SDK_FIXED_SIZE( plugplay_custom_notification_t, 0x28 );                   
    };                                                            
};
#include "magic/plugplay_custom_notification_t.end.hpp"
SDK_VERIFY( struct win::plugplay_custom_notification_t, 0x28 );
