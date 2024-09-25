#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "wudfmessage_header_t.hpp"

#include "magic/wudfmessage_target_device_notification_t.start.hpp"
namespace wdf
{
    struct wudf_devnode_context_t;

    // [struct _WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_target_device_notification_t                 
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 struct wdf::wudfmessage_header_t    header;              //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::guid_t                   event;               //{ +0x0004    +0x0004    +0x0004    } | .Event
        _m02 struct wdf::wudf_devnode_context_t* devnode_context;     //{ +0x0018    +0x0018    +0x0018    } | .DevnodeContext
        _m03 uint64_t                            target_context;      //{ +0x0020    +0x0020    +0x0020    } | .TargetContext
        _m04 uint32_t                            custom_buffer_size;  //{ +0x0028    +0x0028    +0x0028    } | .CustomBufferSize
        _m05 uint32_t                            name_buffer_offset;  //{ +0x002c    +0x002c    +0x002c    } | .NameBufferOffset
                                                                    
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.$", 0x30, true, 0xb4607764517b322b );                   
        SDK_FIXED_SIZE( wudfmessage_target_device_notification_t, 0x30 );                   
    };                                                              
};
#include "magic/wudfmessage_target_device_notification_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_target_device_notification_t, 0x30 );
