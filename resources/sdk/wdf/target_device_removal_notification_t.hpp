#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/target_device_removal_notification_t.start.hpp"
namespace wdf
{
    // [struct _TARGET_DEVICE_REMOVAL_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct target_device_removal_notification_t    
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 uint16_t                  version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                  size;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t         event;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
        _m03 struct nt::file_object_t* file_object;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileObject
                                                   
        SDK_NONVOL_PROPERTIES( "_TARGET_DEVICE_REMOVAL_NOTIFICATION.$", 0x20, true, 0x6ca42892a06e465d );            
        SDK_FIXED_SIZE( target_device_removal_notification_t, 0x20 );            
    };                                             
};
#include "magic/target_device_removal_notification_t.end.hpp"
SDK_VERIFY( struct wdf::target_device_removal_notification_t, 0x20 );
