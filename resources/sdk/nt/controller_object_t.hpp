#pragma once
#include <sdkgen/support_library.hpp>
#include "kdevice_queue_t.hpp"

#include "magic/controller_object_t.start.hpp"
namespace nt
{
    // [struct _CONTROLLER_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct controller_object_t                               
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 int16_t                    type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t                    size;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 void*                      controller_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ControllerExtension
        _m03 struct nt::kdevice_queue_t device_wait_queue;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceWaitQueue
                                                             
        SDK_NONVOL_PROPERTIES( "_CONTROLLER_OBJECT.$", 0x48, true, 0x26a4edec98a770a5 );                     
        SDK_FIXED_SIZE( controller_object_t, 0x48 );                     
    };                                                       
};
#include "magic/controller_object_t.end.hpp"
SDK_VERIFY( struct nt::controller_object_t, 0x48 );
