#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/policy_device_type_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/policy_device_t.start.hpp"
namespace pop
{
    // [struct _POP_POLICY_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct policy_device_t                                 
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 nt::list_entry_t                 link;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 enum power::policy_device_type_t device_type;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceType
        _m02 void*                            notification;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Notification
        _m03 nt::unicode_view                 name;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Name
        _m04 struct nt::device_object_t*      device;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Device
        _m05 struct nt::irp_t*                irp;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Irp
                                                           
        SDK_MAGIC_PROPERTIES( "_POP_POLICY_DEVICE.$", 0x40, true, 0x61ce0310c02c59ee );             
        SDK_FIXED_SIZE( policy_device_t, 0x40 );             
    };                                                     
};
#include "magic/policy_device_t.end.hpp"
SDK_VERIFY( struct pop::policy_device_t, 0x40 );
