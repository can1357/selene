#pragma once
#include <sdkgen/support_library.hpp>
#include "rw_lock_t.hpp"
#include "../nt/thermal_cooling_interface_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct kevent_t;        }

#include "magic/cooling_extension_t.start.hpp"
namespace pop
{
    // [struct _POP_COOLING_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cooling_extension_t                                          
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                              
        _m00 nt::list_entry_t                       link;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 nt::list_entry_t                       request_list_head;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestListHead
        _m02 struct pop::rw_lock_t                  lock;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Lock
        _m03 struct nt::device_object_t*            device_object;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceObject
        _m04 void*                                  notification_entry;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NotificationEntry
        _m05 uint8_t                                enabled;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Enabled
        _m06 uint8_t                                active_engaged;       //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .ActiveEngaged
        _m07 uint8_t                                throttle_limit;       //{ +0x0042    +0x0042    +0x0042    +0x0042    } | .ThrottleLimit
        _m08 uint8_t                                updating_to_current;  //{ +0x0043    +0x0043    +0x0043    +0x0043    } | .UpdatingToCurrent
        _m09 struct nt::kevent_t*                   removal_flush_event;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RemovalFlushEvent
        _m10 struct nt::kevent_t*                   pnp_flush_event;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PnpFlushEvent
        _m11 struct nt::thermal_cooling_interface_t interface;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Interface
                                                                        
        SDK_MAGIC_PROPERTIES( "_POP_COOLING_EXTENSION.$", 0x90, true, 0x255cbf9a395971e9 );                    
        SDK_FIXED_SIZE( cooling_extension_t, 0x90 );                    
    };                                                                  
};
#include "magic/cooling_extension_t.end.hpp"
SDK_VERIFY( struct pop::cooling_extension_t, 0x90 );
